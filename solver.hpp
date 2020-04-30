//
// Created by oz on 26/04/2020.
//
#ifndef SOLVER_SOLVER_HPP
#define SOLVER_SOLVER_HPP

#include <iostream>
#include <complex>

namespace solver {

    class RealVariable {
    public:
        double a, b, c;

        RealVariable();

        RealVariable(double a, double b, double c);

        friend RealVariable &operator+(RealVariable x, RealVariable y);

        friend RealVariable &operator+(RealVariable x, double y);

        friend RealVariable &operator+(double y, RealVariable x);

        friend RealVariable &operator*(double x, RealVariable y);

        friend RealVariable &operator*(RealVariable y, double x);

        friend RealVariable &operator/(RealVariable y, double x);

        friend RealVariable &operator^(RealVariable &x, int num);

        friend RealVariable &operator==(RealVariable x, RealVariable y);

        friend RealVariable &operator==(RealVariable x, double y);

        friend RealVariable &operator==(double y, RealVariable x);

        friend RealVariable &operator-(RealVariable x, double y);

        friend RealVariable &operator-(double y, RealVariable x);

        friend RealVariable &operator-(RealVariable x, RealVariable y);

    };

    double solve(RealVariable x);

    class ComplexVariable {
    private:

    public:
        std::complex<double> a, b, c;

        ComplexVariable();

        friend ComplexVariable &operator*(std::complex<double> x, ComplexVariable y);

        friend ComplexVariable &operator*(ComplexVariable x, std::complex<double> num);

        friend ComplexVariable &operator-(ComplexVariable x, std::complex<double> y);

        friend ComplexVariable &operator-(ComplexVariable x, ComplexVariable y);

        friend ComplexVariable &operator-(std::complex<double> y, ComplexVariable x);

        friend ComplexVariable &operator+(ComplexVariable x, std::complex<double> y);

        friend ComplexVariable &operator+(ComplexVariable x, ComplexVariable y);

        friend ComplexVariable &operator+(std::complex<double> y, ComplexVariable x);

        friend ComplexVariable &operator==(ComplexVariable x, std::complex<double> y);

        friend ComplexVariable &operator==(ComplexVariable x, ComplexVariable y);

        friend ComplexVariable &operator==(std::complex<double> y, ComplexVariable x);

        friend ComplexVariable &operator/(ComplexVariable x, double num);

        friend ComplexVariable &operator^(ComplexVariable x, int num);
    };

    std::complex<double> solve(ComplexVariable y);


}

#endif //SOLVER_SOLVER_HPP
