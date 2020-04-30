#include "doctest.h"
#include "solver.hpp"
#include <string>
#include <complex>
#include <stdlib.h>

using namespace std;
using namespace solver;
//using  solver::solve,solver:: RealVariable,solver::ComplexVariable;

/*TEST_CASE ("real number") {
    RealVariable x;
            CHECK_THROWS(abs(solve(-28*(x^2)+13*x-22==0.0)));
            CHECK(solve(2 * x - 4 == 10) == 7);
            CHECK(solve(x + 1 == 0) == -1);
            CHECK(solve(x + 5 == 5) == 0);
            CHECK(abs(solve(x ^ 2 == 4) == 2));
            CHECK(abs(solve(x ^ 2 == 9) == 3));
            CHECK(abs(solve(x ^ 2 + 5 == 30) == 5));
            //CHECK(abs(solve(x ^ 2 + 2 * x + 1)) == 1.0);
            //CHECK(abs(solve(x ^ 2 + 4 * x + 4)) == 2);
            //CHECK(abs(solve(x ^ 2 + 6 * x + 9)) == 3);
            //CHECK(abs(solve(2 * x ^ 2 - 1 * x == 0) <= 0.5));
    //10
            CHECK_THROWS(solve(4 * x + 5 - 4 * x == 0));
            CHECK_THROWS(solve(4 * x + 2 - 4 * x == 0));
            CHECK(solve(x + x - 2 == 10) == 6);
            CHECK(abs(solve(x ^ 2 == 81) == 9));
            //CHECK(abs(solve(x * x == 64) == 8));
            //CHECK(abs(solve(3 * 3 * x * x == 81)) == 3);
            //CHECK(abs(solve(3 * 3 * x * x == 9 * 9)) == 3);
            //CHECK(abs(solve(3 * 3 * x * x == 3 * 3 * 3 * 3)) == 3);
            CHECK(solve(2 * 2 * x + 2 * 2 - 2 * x - 2 == 0) == 1);
            //CHECK(solve(3 ^ 2 * x == 3 ^ 2) == 1);
    //20
    //CHECK_THROWS(solve(3^2*x+2==3^2*x));
            //CHECK_THROWS(solve(3 ^ 2 * (x ^ 2) + 20 * x == -24));
            CHECK_THROWS(solve(2 * (x ^ 2) + 7 * (x ^ 2) + 20 * x == -24));
            //CHECK_THROWS(solve(3 ^ 2 * (x ^ 2) + 20 * x + 12 == -12));
            CHECK_THROWS(solve(2 * x + 2 == 2 * x + 2));
            CHECK_THROWS(solve(x + x - 2 * x + 2 == 2));
            //CHECK_THROWS(solve(x * x == x ^ 2));
            //CHECK_THROWS(solve(x * x + 2 == x ^ 2 + 1));
            //CHECK_THROWS(solve(x * x + 3 * x + 1 == x ^ 2 + x + 2 * x + 1));
            //CHECK_THROWS(solve(x * x + 3 * x + 1 - (x ^ 2 + x + 2 * x + 1) == 0));
    //30
            //CHECK(abs(solve(4 * x ^ 2 + 8 * x + 2)) - 1.70710 <= 0.0001);
            //CHECK(abs(solve(4 * x ^ 2 - 8 * x + 2)) - 1.70710 <= 0.0001);
            //CHECK(abs(solve(2 * x ^ 2 + 2 * x - 2)) - 1.61803 <= 0.0001);
            //CHECK(solve(x * x - 2 * x + 1 == 0) == 1);
            //CHECK(solve(2 * (x ^ 2) - 2 * x + 1 == x * x) == 1);
            CHECK(solve(2 * (x ^ 2) - 2 * x - 2 * x + 2 == 0) == 1);
            CHECK(solve(2 * (x ^ 2) + 2 == 4*x) == 1);
            CHECK(solve(9 * (x ^ 2) - 6 * 9 * x + 80 == -1) == 3);
            //CHECK(solve(x ^ 2 - x * x + 2*x == 2) == 1);
            CHECK(solve(3 * x + 2 * x == 25) == 5);
    //40
            //CHECK(solve(x ^ 2 + 23 * x + 132 == 0) - 11 <= 1);
            //CHECK_THROWS(solve(4 * x ^ 2 - x - 48 = 3 * x ^ 2 - 12 + 3 * x));
            CHECK(solve(16 * x - 7 == -71) == -4);
            //CHECK_THROWS(solve(121 * x ^ 2 - 110 * x == 4));
            //CHECK_THROWS(solve(32 * x ^ 2 + 18 * x - 17 == 0));
            //CHECK_THROWS(solve(56 * x ^ 2 + 27 == 89 * x - 8));
            //CHECK_THROWS(solve(42 * x ^ 2 - 69 * x + 20 = 7 * x ^ 2 - 8));
            //CHECK(abs(solve(6 * 2 * x * x - 12 == 0)) == 1);
            CHECK(abs(solve(36 * x ^ 2 - 1 == 0)) - 0.1666666 <= 0.00001);
            CHECK(solve(2 * x - 4 == 10) == 7);
    //50

}


TEST_CASE ("complex number") {
    ComplexVariable x;

            CHECK(solve(2 * (x) - 4 == 10) == complex(7.0, 0.0));
            CHECK(solve(x + 1 == 0) == complex(-1.0, 0.0));
            CHECK(solve(x + 5 == 5) == complex(0.0, 0.0));
            CHECK(solve(x + x - 2 == 10) == complex(6.0, 0.0));
            CHECK(solve(2 * x - 2 * x == 0) == complex(0.0, 0.0));
            CHECK(solve(7 * x - 6 * x == 1) == complex(1.0, 0.0));
            CHECK(solve(2 * x + 2 * x + 2 + 2 == 0) == complex(-1.0, 0.0));
            CHECK(solve(3 * x + 5 * x == 16) == complex(2.0, 0.0));
            CHECK(solve(3 + 18 + 7 * x == 0) == complex(-3.0, 0.0));
            CHECK(solve(6 * x == 36) == complex(6.0, 0.0));
    //10
            CHECK(solve(x + complex(-2.0, 2.0) == 0) == complex(2.0, -2.0));
            CHECK(solve(x == complex(-2.0, 2.0) == complex(-2.0, 2.0)));
            CHECK(solve(x + complex(-2.0, 2.0) + x == 0) == complex(1, -1));
            CHECK(solve(2 * x == complex(-2.0, 2.0) == complex(-1.0, 1.0)));
            CHECK(solve(2 * x + complex(4.0, 4.0)) == complex(-2, -2));
            CHECK(solve(x + complex(2.0, 2.0) + complex(-1.0, -1.0) == 0) == complex(-1, -1));
            CHECK(solve(x + complex(2.0, 2.0) == complex(-1.0, -1.0)) == complex(-3, -3));
            CHECK(solve(x + complex(2.0,2.0) == complex(1.0, 1.0)) == complex(-1, -1));
            CHECK(solve(x + complex(2.0, 2.0) == complex(2.0, 2.0) - x) == complex(0, 0));
            CHECK(solve(4 * x + complex(0.0, 0.0) + 4 == 0) == complex(-1, 0));
    //20
            CHECK(solve(4 * x + 12 == 0) == complex(-3, 0));
            CHECK(solve(4 * x + complex(4.0, 12.0) == 0) == complex(-1, -3));
            CHECK(solve(4 * x + complex(2.0, 4.0) + 4 == 0) == complex(-1.5, -1.0));
            CHECK(solve(6 * x + 8 == complex(8.0, 6.0) == complex(0.0, 1.0)));
            CHECK(solve(x == complex(0.0, 1.0) + 1.0) == complex(1.0, 1.0));
            CHECK(solve(2 * x = 3 * x) == complex(0.0, 0.0));
            CHECK(solve(5 * x - 4 * x == 12) == complex(12, 0));
            CHECK(solve(40 * x == 10) == complex(4, 0));
            CHECK(solve(12 + 3 * 4 * x == 18) == complex(0.5, 0.0));
            CHECK(solve(4 * 3 + 4 * 3 * x == 18) == complex(0.5, 0.0));
    //30
            CHECK(solve(2 * x * 6 == 12) == complex(1, 0));
            CHECK(solve(2 * x * 6 - 6 == 6) == complex(1, 0));
            CHECK(solve(x + complex(6.0, 0.0) == 0) == complex(-6.0, 0.0));
            CHECK(solve(2 * 6 * x + complex(-6.0, 0.0) == complex(6.0, 12.0)) == complex(1.0, 1.0));
            CHECK(solve(12 * x + complex(-6.0, 0.0) == complex(-6.0, -12.0)) == complex(-1.0, -1.0));
            CHECK(solve(12 * x + complex(-6.0, 0.0) == complex(-6.0, 12.0)) == complex(-1.0, 1.0));
            CHECK(solve(2 * x - 2 * x + 2 - 2 == 0) == complex(0, 0));
            CHECK(solve(x + 1 + complex(1.0, 1.0) == 0) == complex(-1.0, -2.0));
            CHECK(solve(2 * x + 4 + complex(-2.0, -2.0) == 0) == complex(-1.0, 1.0));
            CHECK(solve(4 * x + 4 + complex(-2.0, -2.0) == 0) == complex(-0.5, 0.5));
    //40
            CHECK(solve(x * complex(1.0, 1.0) == complex(1.0, 1.0)) == complex(1.0, 1.0));
            CHECK(solve(x * complex(1.0, 1.0) + complex(2.0, 2.0) == 0) == complex(-2.0, 2.0));
            CHECK(solve(2 * x * complex(1.0, 1.0) == complex(1.0, 1.0)) == complex(0.5, 0.5));
            CHECK(solve(4 * x * complex(1.0, 1.0) + complex(1.0, 1.0) == complex(9.0, 9.0)) == complex(2.0, 2.0));
            //CHECK(solve(2 * complex(2.0, 2.0) == 2 * complex(2.0, 2.0)) == complex(1.0, 1.0));
            CHECK(solve(x * complex(1.0, 1.0) + x * complex(2.0, 2.0) == complex(3.0, 3.0)) == complex(1.0, 1.0));
            CHECK(solve(x * complex(1.0, 1.0) + x * complex(2.0, 2.0) + complex(3.0, 3.0) == 0) == complex(-1.0, -1.0));
            CHECK(solve(x * complex(1.0, 1.0) + x * complex(-1.0, -1.0) == 0) == complex(0.0, 0.0));
            CHECK(solve(x * complex(1.0, 1.0) + x * complex(1.0, 1.0) == 1) == complex(0.25, -0.25));
            CHECK(solve(x * complex(1.0, 1.0) + x * complex(1.0, 1.0) == -2) == complex(-0.5, 0.5));
            CHECK(solve(x * complex(1.0, 1.0) + x * complex(1.0, 1.0) == 4) == complex(1.0, -1.0));
    //50
}*/

TEST_CASE ("real") {
    RealVariable x;
    RealVariable y;

            CHECK_THROWS(abs(solve(34 * (x ^ 2) + 37 * x + 28 == 0.0)));
            CHECK(abs(solve(-34 * (x ^ 2) + 44 * x - 14 == 0.0)) - 0.56387 < 0.0001);
            CHECK_THROWS(abs(solve(-28 * (x ^ 2) + 13 * x - 22 == 0.0)));
            CHECK_THROWS(abs(solve(41 * (x ^ 2) + 10 * x + 14 == 0.0)));
            CHECK_THROWS(abs(solve(-23 * (x ^ 2) - 9 * x - 23 == 0.0)));
            CHECK(abs(solve(23 * (x ^ 2) - 13 * x - 38 == 0.0)) - 1.59868 < 0.0001);
            CHECK(abs(solve(19 * (x ^ 2) + 18 * x - 20 == 0.0)) - 0.656364 < 0.0001);
            CHECK_THROWS(abs(solve(33 * (x ^ 2) - 19 * x + 13 == 0.0)));
            CHECK_THROWS(abs(solve(-26 * (x ^ 2) + 18 * x - 14 == 0.0)));
            CHECK(abs(solve(-20 * (x ^ 2) - 47 * x - 27 == 0.0)) - 1.35 < 0.0001);
            CHECK_THROWS(abs(solve(9 * (x ^ 2) + 20 * x + 18 == 0.0)));
            CHECK(abs(solve(44 * (x ^ 2) + 7 * x - 38 == 0.0)) - 0.853173 < 0.0001);
            CHECK(abs(solve(-7 * (x ^ 2) - 20 * x + 24 == 0.0)) - 3.76724 < 0.0001);
            CHECK(abs(solve(-28 * (x ^ 2) - 30 * x + 35 == 0.0)) - 1.77547 < 0.0001);
            CHECK(abs(solve(-12 * (x ^ 2) + 49 * x - 25 == 0.0)) - 0.59769 < 0.0001);
            CHECK_THROWS(abs(solve(-34 * (x ^ 2) + 21 * x - 36 == 0.0)));
            CHECK(abs(solve(-23 * (x ^ 2) + 42 * x + 31 == 0.0)) - 0.563938 < 0.0001);
            CHECK(abs(solve(7 * (x ^ 2) + 24 * x + 13 == 0.0)) - 0.67427 < 0.0001);
            CHECK_THROWS(abs(solve(21 * (x ^ 2) + 47 * x + 32 == 0.0)));
            CHECK_THROWS(abs(solve(34 * (x ^ 2) + 37 * x + 28 == 0.0)));
            CHECK(abs(solve(-34 * (x ^ 2) + 44 * x - 14 == 0.0)) - 0.56387 < 0.0001);


            CHECK((solve((y ^ 2) - y == 2)) == 2);
            CHECK_THROWS(solve(4 * (y ^ 2) - y - 48 = 3 * (y ^ 2) - 12 + 3 * y));
            CHECK(solve(16 * y - 7 == -71) == -4);
            CHECK_THROWS(solve(121 * (y ^ 2) - 110 * y == 4));
            CHECK(solve(2 * y - 12 == 10) == 11);
            CHECK_THROWS(solve(42 * (y ^ 2) - 69 * y + 20 = 7 * (y ^ 2) - 6));
            CHECK_THROWS(solve(28 * (y ^ 2) + 27 == 99 * y - 6));
            CHECK((solve(3 * 2 * 2 * y * y - 6 - 6 == 0)) == 1);
            CHECK_THROWS(solve(82 * (y ^ 2) + 19 * y - 17 == 1));
            CHECK((solve((y ^ 2) - y - 2 == 0)) == 2);


            CHECK(abs(solve(44 * (x ^ 2) + 7 * x - 38 == 0.0)) - 0.853173 < 0.0001);
            CHECK(abs(solve(-7 * (x ^ 2) - 20 * x + 24 == 0.0)) - 3.76724 < 0.0001);
            CHECK(abs(solve(-28 * (x ^ 2) - 30 * x + 35 == 0.0)) - 1.77547 < 0.0001);
            CHECK(abs(solve(-12 * (x ^ 2) + 49 * x - 25 == 0.0)) - 0.59769 < 0.0001);
            CHECK_THROWS(abs(solve(-34 * (x ^ 2) + 21 * x - 36 == 0.0)));
            CHECK(abs(solve(-23 * (x ^ 2) + 42 * x + 31 == 0.0)) - 0.563938 < 0.0001);
            CHECK(abs(solve(7 * (x ^ 2) + 24 * x + 13 == 0.0)) - 0.67427 < 0.0001);
            CHECK_THROWS(abs(solve(21 * (x ^ 2) + 47 * x + 32 == 0.0)));

            CHECK(solve(2 * y - 4 == 18) == 11);
            CHECK(solve((y ^ 2) == 9) == 3);
            CHECK(solve((y ^ 2) - 7 * y + 12) == 4);
            CHECK(solve(y + 10 == 10) == 0);
            CHECK(solve(y + 3 == 0) == -3);
            CHECK(solve((y ^ 2) - y == 0) == 1);
            CHECK(solve((y ^ 2) - 6 == 30) == 6);
            CHECK(solve((y ^ 2) - 8 * y + 16) == 4);
            CHECK(solve((y ^ 2) == 16) == 4);
            CHECK(solve((y ^ 2) + 4 * y + 4) == -2);

}

TEST_CASE ("complex") {
    ComplexVariable y;
    ComplexVariable x;

            CHECK(solve(y + y - 2 == 10) == complex(6.0, 0.0));
            CHECK(solve(4 * y - 8 == 10 * y + complex(4.0, -12.0)) == complex(-2.0, 2.0));
            CHECK(solve(3 * y * 7 + 21 == complex(0.0, -21.0)) == complex(-1.0, -1.0));
            CHECK(solve(7 + 5 - 4 * 3 * y == 18) == complex(-0.5, 0.0));
            CHECK(solve(y + 13 == 7) == complex(-6.0, 0.0));
            CHECK(solve(2 * y - y * 3 == 15) == complex(-15.0, 0.0));
            CHECK(solve(y + 2 - y - 2 == y) == complex(0.0, 0.0));
            CHECK(solve(56 * y + 8 == complex(8.0, -56.0)) == complex(0.0, -1.0));
            CHECK(solve(5 * y == 6 * y) == complex(0.0, 0.0));
            CHECK(solve(4 * y + 12 == 0) == complex(-3.0, 0.0));
            CHECK(solve(y + y - 2 == 10) == complex(6.0, 0.0));
            CHECK(solve(4 * y - 8 == 10 * y + complex(4.0, -12.0)) == complex(-2.0, 2.0));
            CHECK(solve(3 * y * 7 + 21 == complex(0.0, -21.0)) == complex(-1.0, -1.0));
            CHECK(solve(7 + 5 - 4 * 3 * y == 18) == complex(-0.5, 0.0));
            CHECK(solve(y + 13 == 7) == complex(-6.0, 0.0));
            CHECK(solve(2 * y - y * 3 == 15) == complex(-15.0, 0.0));
            CHECK(solve(y + 2 - y - 2 == y) == complex(0.0, 0.0));
            CHECK(solve(56 * y + 8 == complex(8.0, -56.0)) == complex(0.0, -1.0));

            CHECK(solve(56 * x + 8 == complex(8.0, -56.0)) == complex(0.0, -1.0));
            CHECK(solve(40 * x == 10) == complex(0.25, 0.0));
            CHECK(solve(12 + 3 * 4 * x == 20) == complex(0.75, 0.0));
            CHECK(solve(4 * x + 12 == 0) == complex(-3.0, 0.0));
            CHECK(solve(x + 2 - x - 2 == x) == complex(0.0, 0.0));
            CHECK(solve(x + x - 2 == 10) == complex(6.0, 0.0));
            CHECK(solve(4 * x - 8 == 10 * x + complex(4.0, -12.0)) == complex(-2.0, 2.0));
            CHECK(solve(6 * x + 8 == complex(8.0, 6.0)) == complex(0.0, 1.0));
            CHECK(solve(5 * x == 6 * x) == complex(0.0, 0.0));
            CHECK(solve(4 * x + 12 == 0) == complex(-3.0, 0.0));
            CHECK(solve(5 * x - 4 * x == 12) == complex(12.0, 0.0));
            CHECK(solve(2 * x == 3 * x) == complex(0.0, 0.0));
            CHECK(solve(5 * x == 6 * x) == complex(0.0, 0.0));
            CHECK(solve((x ^ 2) + 16 * x + 16 == 14 * x + 2 * x) == complex(0.0, 4.0));

            CHECK(solve(x + 2.0 == 0.0) == complex(-2.0, 0.0));
            CHECK(solve(x + 51.0 == 51.0) == complex(0.0, 0.0));
            CHECK(solve(2 * x + 2 * x + 2.0 + 2.0 == 0.0) == complex(-1.0, 0.0));
            CHECK(solve(x + x - 3 * x == 10.0) == complex(-10.0, 0.0));
            CHECK(solve(7 * x - 10 * x == -6.0) == complex(2.0, 0.0));
            CHECK(solve(2 * x - 3 * x == 0.0) == complex(0.0, 0.0));
            CHECK(solve(12.0 * x == 36.0) == complex(3.0, 0.0));
            CHECK(solve(3 * (x) - 5.0 == 10.0) == complex(5.0, 0.0));
            CHECK(solve(7 * x - 6 * x == 3.0) == complex(3.0, 0.0));
            CHECK(solve(10.0 + 18 + 7 * x == 0.0) == complex(-4.0, 0.0));
}