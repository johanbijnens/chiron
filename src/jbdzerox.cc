// jbdzerox.cc is part of the 
// filename is part of the 
// numerical library jbnumlib included with the 
// CHIRON ChPT at two loops program collection
// Copyright (C) 2017 Johan Bijnens, v1.0
// except for the CERNLIB parts which have their own copyright (usually CERN)
// CHIRON is licenced under the GNU GPL version 2 or later,
// see COPYING for details.
// Please respect the Guidelines, see GUIDELINES for details.

// contains essentially the routine dzerox (c200) from cernlib
// ported to C++ by J. Bijnens
// method see   
// J.C.P. Bus and T.J. Dekker, Two Efficient Algorithms with
// Guaranteed Convergence for Finding a Zero of a Function,
//  ACM Trans. Math. Software 1 (1975) 330-345.
//
//  (MODE = 0: Algorithm M;    MODE = 1: Algorithm R made default)

#include <cmath>
#include <iostream>
#include "jbnumlib.h"

// sign function
inline double jbsign(const double value){
  if(value < 0.) return -1.;
  return 1.;
}

double jbdzerox(double (*f)(const double),const double a0,const double b0,
		 const double eps,const int maxf, const int mode){
  bool lmt[2];
  int im1[2]={2,3},im2[2]={-1,3};
  const double z1 = 1., half = z1/2.;
  double fa=f(b0);
  double fb=f(a0);
  if(fa*fb >  0.){
    std::cout << "jbzerox called with f(a0) and f(b0) same sign\n";
    return 0.;
  }
  double atl= fabs(eps);
  double b=a0;
  double a=b0;
  lmt[1]= true;
  int mf=2;
  double c,fc,d=0.,fd=0.,tol,h,hb,w,p,q,fda,fdb;
  int ie;
 label1:
  c=a;
  fc=fa;
 label2:
  ie=0;
 label3:
  if(fabs(fc) < fabs(fb)){
    if(c != a){
      d=a;
      fd=fa;
    }
    a=b;
    b=c;
    c=a;
    fa=fb;
    fb=fc;
    fc=fa;
  }
  tol=atl*(1.+fabs(c));
  h=half*(c+b);
  hb=h-b;
  if(fabs(hb) > tol){
    if(ie > im1[mode]){
      w=hb;
    }
    else{
      tol=tol*jbsign(hb);
      p=(b-a)*fb;
      lmt[0]= (ie <= 1);
      if(lmt[mode]){
	q=fa-fb;
	lmt[1]= false;
      }
      else{
	fdb=(fd-fb)/(d-b);
	fda=(fd-fa)/(d-a);
	p=fda*p;
	q=fdb*fa-fda*fb;
      }
      if(p < 0.){
	p=-p;
	q=-q;
      }
      if(ie == im2[mode]) p=p+p;
      if((p == 0.) || (p <= (q*tol))){
	w=tol;}
      else{
	if(p < hb*q){
	  w=p/q;}
	else{
	  w=hb;}
      }
    }
    d=a;
    a=b;
    fd=fa;
    fa=fb;
    b=b+w;
    mf=mf+1;
    if(mf >= maxf){
      std::cout << "too many function calls in zerox\n";
      return 0.;
    }
    fb=f(b);
    if( (fb == 0.) || jbsign(fc) == jbsign(fb)) goto label1;
    if(w == hb) goto label2;
    ie=ie+1;
    goto label3;
  }
  return c;
} 

