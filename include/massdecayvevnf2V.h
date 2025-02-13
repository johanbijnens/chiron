// massdecayvevnf2V.h is part of the CHIRON ChPT at two loops program collection
// Copyright (C) 2019 Johan Bijnens, v1.0
// CHIRON is licenced under the GNU GPL version 2 or later,
// see COPYING for details.
// Please respect the Guidelines, see GUIDELINES for details.

// results from:
// p^4:
//J. Gasser and H. Leutwyler,
//Light quarks at low temperatures,
// Phys. Lett. B184 (1987) 83
//  J.~Gasser and H.~Leutwyler,
//  ``Spontaneously Broken Symmetries: Effective Lagrangians at Finite Volume,''
//  Nucl.\ Phys.\ B {\bf 307} (1988) 763.

// p^6: formulas in terms of physical masses as given in
//  J.~Bijnens and T.~Rössler,
//  %``Finite Volume at Two-loops in Chiral Perturbation Theory,''
//  JHEP {\bf 1501} (2015) 034
//  [arXiv:1411.6384 [hep-lat]].
// eralier work exists by Colangelo et al

#ifndef MASSDECAYVEVNF2V_H
#define MASSDECAYVEVNF2V_H

#include <complex>
typedef std::complex<double> dcomplex;

#include "inputsnf2.h"
#include "linf2.h"

double mpi4nf2Vb(const physmassnf2 mass, const double xl);
double mpi6nf2Vb(const physmassnf2 mass, const li liiin, const double xl);
double mpi6lnf2Vb(const physmassnf2 mass, const li liiin, const double xl);
double mpi6rnf2Vb(const physmassnf2 mass, const double xl);

double fpi4nf2Vb(const physmassnf2 mass, const double xl);
double fpi6nf2Vb(const physmassnf2 mass, const li liiin, const double xl);
double fpi6lnf2Vb(const physmassnf2 mass, const li liiin, const double xl);
double fpi6rnf2Vb(const physmassnf2 mass, const double xl);
double qqup4nf2Vb(const physmassnf2 mass, const double xl);

double mpi4nf2Vt(const physmassnf2 mass, const double xl);
double mpi6nf2Vt(const physmassnf2 mass, const li liiin, const double xl);
double mpi6lnf2Vt(const physmassnf2 mass, const li liiin, const double xl);
double mpi6rnf2Vt(const physmassnf2 mass, const double xl);

double fpi4nf2Vt(const physmassnf2 mass, const double xl);
double fpi6nf2Vt(const physmassnf2 mass, const li liiin, const double xl);
double fpi6lnf2Vt(const physmassnf2 mass, const li liiin, const double xl);
double fpi6rnf2Vt(const physmassnf2 mass, const double xl);
double qqup4nf2Vt(const physmassnf2 mass, const double xl);

#endif // MASSDECAYVEVNF2V_H

