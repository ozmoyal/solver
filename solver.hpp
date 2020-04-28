//
// Created by oz on 26/04/2020.
//
#ifndef SOLVER_SOLVER_HPP
#define SOLVER_SOLVER_HPP

#include <iostream>
#include <complex>

namespace solver {

    class RealVariable {
    private:
    double a,b,c;
    RealVariable():a(0),b(0),c(0){};
    RealVariable(double a, double b,double c);
    public:

    };

    double solve(RealVariable x);

    class ComplexVariable {
    private:


    public:

    };
    std::complex<double> solve(ComplexVariable y);


}

#endif //SOLVER_SOLVER_HPP
