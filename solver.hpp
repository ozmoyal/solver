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

        friend RealVariable &operator+(const RealVariable x, const RealVariable y);

        friend RealVariable &operator+(const RealVariable x, const double y);

        friend RealVariable &operator+(const double y, const RealVariable x);

        friend RealVariable &operator*(const double x, const RealVariable y);

        friend RealVariable &operator*(const RealVariable y, const double x);

        friend RealVariable &operator*(const RealVariable y, const RealVariable x);

        friend RealVariable &operator/(const RealVariable y, const double x);

        friend RealVariable &operator^(const RealVariable &x, const int num);

        friend RealVariable &operator==(const RealVariable x, const RealVariable y);

        friend RealVariable &operator==(const RealVariable x, const double y);

        friend RealVariable &operator==(const double y, const RealVariable x);

        friend RealVariable &operator-(const RealVariable x, const double y);

        friend RealVariable &operator-(const double y, const RealVariable x);

        friend RealVariable &operator-(const RealVariable x, const RealVariable y);

    };


    class ComplexVariable {
    private:

    public:
        std::complex<double> a, b, c;

        ComplexVariable();

        friend ComplexVariable &operator*(const std::complex<double> x, const ComplexVariable y);

        friend ComplexVariable &operator*(const ComplexVariable x, const std::complex<double> num);

       // friend ComplexVariable &operator*(const ComplexVariable y, const ComplexVariable x);

        friend ComplexVariable &operator-(const ComplexVariable x, const std::complex<double> y);

        friend ComplexVariable &operator-(const ComplexVariable x, const ComplexVariable y);

        friend ComplexVariable &operator-(const std::complex<double> y, const ComplexVariable x);

        friend ComplexVariable &operator+(const ComplexVariable x, const std::complex<double> y);

        friend ComplexVariable &operator+(const ComplexVariable x, const ComplexVariable y);

        friend ComplexVariable &operator+(const std::complex<double> y, const ComplexVariable x);

        friend ComplexVariable &operator==(const ComplexVariable x, const std::complex<double> y);

        friend ComplexVariable &operator==(const ComplexVariable x, const ComplexVariable y);

        friend ComplexVariable &operator==(const std::complex<double> y, const ComplexVariable x);

        friend ComplexVariable &operator/(const ComplexVariable x, const double num);

        friend ComplexVariable &operator^(const ComplexVariable x, const int num);
    };

    double solve(RealVariable x);

    std::complex<double> solve(ComplexVariable y);


}

#endif //SOLVER_SOLVER_HPP
