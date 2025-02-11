// quenchedoneloopintegrals.h is part of the CHIRON ChPT at two loops program
// collection
// Copyright (C) 2016 Johan Bijnens, v1.00
// CHIRON is licenced under the GNU GPL version 2 or later,
// see COPYING for details.
// Please respect the Guidelines, see GUIDELINES for details.

// Header file for the definitions of the quenched one-loop integrals


#ifndef QUENCHEDONELOOPINTEGRALS_H
#define QUENCHEDONELOOPINTEGRALS_H

#include <complex>
typedef std::complex<double> dcomplex;
#include "oneloopintegrals.h"

// bare bubble integral
dcomplex Bb(const int nprop, const double m1sq,const double m2sq,
	    const double qsq, const double mu2);
dcomplex B1b(const int nprop, const double m1sq,const double m2sq,
	    const double qsq, const double mu2);
dcomplex B21b(const int nprop, const double m1sq,const double m2sq,
	    const double qsq, const double mu2);
dcomplex B22b(const int nprop, const double m1sq,const double m2sq,
	    const double qsq, const double mu2);
dcomplex B31b(const int nprop, const double m1sq,const double m2sq,
	    const double qsq, const double mu2);
dcomplex B32b(const int nprop, const double m1sq,const double m2sq,
	    const double qsq, const double mu2);

#endif //  QUENCHEDONELOOPINTEGRALS_H

