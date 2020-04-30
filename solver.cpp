//
// Created by oz on 29/04/2020.
//
#include "solver.hpp"
#include <iostream>
#include <complex>

//using namespace std;

//using solver::RealVariable, solver::ComplexVariable;
using namespace solver;

solver::RealVariable::RealVariable() : a(0), b(0), c(0) {}

solver::RealVariable::RealVariable(double a, double b, double c) : a(a), b(b), c(c) {}

RealVariable &solver::operator+(RealVariable x, RealVariable y) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator+(RealVariable x, double y) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator+(double y, RealVariable x) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator*(double x, RealVariable y) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator*(RealVariable y, double x) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator/(RealVariable y, double x) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator^(RealVariable &x, int num) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator==(RealVariable x, RealVariable y) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator==(RealVariable x, double y) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator==(double y, RealVariable x) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator-(RealVariable x, double y) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator-(double y, RealVariable x) {
    RealVariable *n = new RealVariable();
    return *n;
}

RealVariable &solver::operator-(RealVariable x, RealVariable y) {
    RealVariable *n = new RealVariable();
    return *n;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

solver::ComplexVariable::ComplexVariable() : a(0, 0), b(0, 0), c(0, 0) {}

ComplexVariable &solver::operator*(std::complex<double> x, ComplexVariable y) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator*(ComplexVariable x, std::complex<double> num) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator-(ComplexVariable x, std::complex<double> y) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator-(ComplexVariable x, ComplexVariable y) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator-(std::complex<double> y, ComplexVariable x) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator+(ComplexVariable x, std::complex<double> y) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator+(ComplexVariable x, ComplexVariable y) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator+(std::complex<double> y, ComplexVariable x) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator==(ComplexVariable x, std::complex<double> y) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator==(ComplexVariable x, ComplexVariable y) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator==(std::complex<double> y, ComplexVariable x) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator/(ComplexVariable x, double num) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

ComplexVariable &solver::operator^(ComplexVariable x, int num) {
    ComplexVariable *n = new ComplexVariable();
    return *n;
}

double solver::solve(RealVariable x) {
    return 0;
}

std::complex<double> solver::solve(ComplexVariable y) {
    return 0;
}


