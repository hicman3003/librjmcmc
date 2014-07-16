/***********************************************************************
This file is part of the librjmcmc project source files.

Copyright : Institut Geographique National (2008-2012)
Contributors : Mathieu Brédif, Olivier Tournaire, Didier Boldo
email : librjmcmc@ign.fr

This software is a generic C++ library for stochastic optimization.

This software is governed by the CeCILL license under French law and
abiding by the rules of distribution of free software. You can use,
modify and/or redistribute the software under the terms of the CeCILL
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info".

As a counterpart to the access to the source code and rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty and the software's author, the holder of the
economic rights, and the successive licensors have only limited liability.

In this respect, the user's attention is drawn to the risks associated
with loading, using, modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean that it is complicated to manipulate, and that also
therefore means that it is reserved for developers and experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or
data to be ensured and, more generally, to use and operate it in the
same conditions as regards security.

The fact that you are presently reading this means that you have had
knowledge of the CeCILL license and that you accept its terms.

***********************************************************************/

#ifndef CONSTANT_UNARY_ENERGY_HPP
#define CONSTANT_UNARY_ENERGY_HPP

#include "rjmcmc/rjmcmc/energy.hpp"

template<typename Value = double>
class constant_energy : public rjmcmc::energy<Value>
{
public:
    typedef Value result_type;
    template<typename T> result_type operator()(const T &) const { return m_energy; }
    template<typename T,typename U> result_type operator()(const T &, const U &) const { return m_energy; }
    constant_energy(Value energy) { m_energy = energy; }

private:
    Value m_energy;
};

#endif /*CONSTANT_UNARY_ENERGY_HPP*/
