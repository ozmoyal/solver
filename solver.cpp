//
// Created by oz on 29/04/2020.
//
#include "solver.hpp"
#include <iostream>
//#include <complex>

//using namespace std;

//using solver::RealVariable, solver::ComplexVariable;
using namespace solver;

solver::RealVariable::RealVariable() : a(0), b(1), c(0) {}

solver::RealVariable::RealVariable(double a, double b, double c) : a(a), b(b), c(c) {}

RealVariable &solver::operator+(RealVariable x, RealVariable y) {
    RealVariable *n = new RealVariable();
    n->a = x.a + y.a;
    n->b = x.b + y.b;
    n->c = x.c + y.c;
    return *n;
}

RealVariable &solver::operator+(RealVariable x, double y) {
    RealVariable *n = new RealVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c + y;
    return *n;
}

RealVariable &solver::operator+(double y, RealVariable x) {
    RealVariable *n = new RealVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c + y;
    return *n;
}

RealVariable &solver::operator*(double x, RealVariable y) {
    RealVariable *n = new RealVariable();
    //n->b = x * y.b;
    n->a=y.a*x;
    n->b=y.b*x;
    n->c=y.c*x;
    return *n;
}

//RealVariable &solver::operator*(RealVariable y, double x) {
   // RealVariable *n = new RealVariable();
 //   n->b = x * y.b;
 //   return *n;
//}

RealVariable &solver::operator*(RealVariable x, RealVariable y) {
    RealVariable *n = new RealVariable();
    n->a = x.a * y.a;
    n->b = y.b*x.b;
    n->c=y.c*x.c;
    return *n;
}


RealVariable &solver::operator/(RealVariable y, double x) {
    RealVariable *n = new RealVariable();
    if (x == 0.0) throw std::invalid_argument("can't dived by zero");
    n->a = y.a / x;
    n->b = y.b / x;
    n->c = y.c / x;
    return *n;
}

RealVariable &solver::operator^(const RealVariable &x, const int exp) {
    RealVariable *n = new RealVariable();
    if (exp == 0) {
        n->a = 0;
        n->b = 0;
        n->c = 1;
    } else if (exp == 1) {
        n->a = 0;
        n->b = 1;
        n->c = 0;
    } else if (exp == 2) {
        n->a = 1;
        n->b = 0;
        n->c = 0;
    } else throw std::invalid_argument("max exp is 2");
    return *n;
}

RealVariable &solver::operator==(RealVariable x, RealVariable y) {
    RealVariable *n = new RealVariable();
    n->a = x.a - y.a;
    n->b = x.b - y.b;
    n->c = x.c - y.c;
    return *n;
}

RealVariable &solver::operator==(RealVariable x, double y) {
    RealVariable *n = new RealVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c - y;
    return *n;
}

RealVariable &solver::operator==(double y, RealVariable x) {
    RealVariable *n = new RealVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c - y;
    return *n;
}

RealVariable &solver::operator-(RealVariable x, double y) {
    RealVariable *n = new RealVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c - y;
    return *n;
}

RealVariable &solver::operator-(double y, RealVariable x) {
    RealVariable *n = new RealVariable();
    n->a = -x.a;
    n->b = -x.b;
    n->c =  y-x.c;
    return *n;
}

RealVariable &solver::operator-(RealVariable x, RealVariable y) {
    RealVariable *n = new RealVariable();
    n->a = x.a-y.a;
    n->b =x.b-y.b;
    n->c =x.c-y.c;
    return *n;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

solver::ComplexVariable::ComplexVariable() : a(0.0, 0.0), b(1.0, 0.0), c(0, 0) {}

ComplexVariable &solver::operator*(std::complex<double> x, ComplexVariable y) {
    ComplexVariable *n = new ComplexVariable();
  n->a=x *y.a;
  n->b=x*y.b;
  n->c=x*y.c;
    return *n;
}

ComplexVariable &solver::operator*(ComplexVariable y, std::complex<double> x) {
    ComplexVariable *n = new ComplexVariable();
    n->a=x *y.a;
  n->b=x*y.b;
  n->c=x*y.c;
    return *n;
}

ComplexVariable &solver::operator-(ComplexVariable x, std::complex<double> y) {
    ComplexVariable *n = new ComplexVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c - y;
    return *n;
}

ComplexVariable &solver::operator-(ComplexVariable x, ComplexVariable y) {
    ComplexVariable *n = new ComplexVariable();
    n->a = x.a - y.a;
    n->b = x.b - y.b;
    n->c = x.c - y.c;
    return *n;
}

ComplexVariable &solver::operator-(std::complex<double> y, ComplexVariable x) {
    ComplexVariable *n = new ComplexVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = y - x.c;
    return *n;
}

ComplexVariable &solver::operator+(ComplexVariable x, std::complex<double> y) {
    ComplexVariable *n = new ComplexVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c + y;
    return *n;
}

ComplexVariable &solver::operator+(ComplexVariable x, ComplexVariable y) {
    ComplexVariable *n = new ComplexVariable();
    n->a = x.a + y.a;
    n->b = x.b + y.b;
    n->c = x.c + y.c;
    return *n;
}

ComplexVariable &solver::operator+(std::complex<double> y, ComplexVariable x) {
    ComplexVariable *n = new ComplexVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c + y;
    return *n;
}

ComplexVariable &solver::operator==(ComplexVariable x, std::complex<double> y) {
    ComplexVariable *n = new ComplexVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c - y;
    return *n;
}

ComplexVariable &solver::operator==(ComplexVariable x, ComplexVariable y) {
    ComplexVariable *n = new ComplexVariable();
    n->c = x.c - y.c;
    n->b = x.b - y.b;
    n->a = x.a - y.a;
    return *n;
}

ComplexVariable &solver::operator==(std::complex<double> y, ComplexVariable x) {
    ComplexVariable *n = new ComplexVariable();
    n->a = x.a;
    n->b = x.b;
    n->c = x.c - y;
    return *n;
}

ComplexVariable &solver::operator/(ComplexVariable x, double div) {
    ComplexVariable *n = new ComplexVariable();
    if (div == 0.0) throw std::invalid_argument("cant diving by 0");
    n->a = x.a / div;
    n->b = x.b / div;
    n->c = x.c / div;
    return *n;
}

ComplexVariable &solver::operator^(const ComplexVariable x, int exp) {
    ComplexVariable *n = new ComplexVariable();
    if (exp == 0) {
        n->a = 0;
        n->b = 0;
        n->c = 1;
    } else if (exp == 1) {
        n->a = 0;
        n->b = 1.0;
        n->c = 0;
    } else if (exp == 2) {
        n->a = 1, 0;
        n->b = 0, 0;
        n->c = 0, 0;
    } else throw std::invalid_argument("max exp is 2");
    return *n;
}

double solver::solve(RealVariable x) {
    if (x.a == 0.0)
     {
        if (x.b == 0.0) throw std::invalid_argument("cant devide by zero");
        else{
        double ans = -(x.c) / x.b;
        return ans;
        }
    }
     else
     {
        double delta = pow(x.b, 2.0) - 4 * x.a * x.c;
        if (delta >= 0) {
            return ((-x.b + sqrt(delta)) /( 2 * x.a ));
        } 
        else 
        {
            throw std::invalid_argument("There is no real solution");
        }
    }
    return 0.0;
}

std::complex<double> solver::solve(ComplexVariable y) {
    std::complex<double> ans;
    if (y.a == 0.0)
     {
        if (y.b == 0.0) throw std::invalid_argument("cant diving by 0");
        else return(-y.c/y.b);
    } 
    else 
    {
        std::complex<double> delta = pow(y.b, 2.0) - 4.0 * y.a * y.c;
        std::complex<double> ans=(-y.b+sqrt(delta))/(2.0*y.a);
        return ans;
        }
    return std::complex(0.0, 0.0);
}


