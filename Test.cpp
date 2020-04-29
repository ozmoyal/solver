#include "doctest.h"
#include "solver.hpp"
#include <string>
#include <complex>
#include <stdlib.h>

using namespace std;
using  solver::solve,solver:: RealVariable,solver::ComplexVariable;

TEST_CASE("real number")
{
    RealVariable x;
    CHECK(solve(2*(x)-4==10) == 7);
    CHECK(solve(x+1 == 0) == -1);
    CHECK(solve(x+5==5)==0);
    CHECK(abs(solve(x^2==4)==2));
    CHECK(abs(solve(x^2==9)==3));
    CHECK(abs(solve(x^2+5==30)==5);
    CHECK(abs(solve(x^2+2*(x)+1))==1);
    CHECK(abs(solve(x^2+4*(x)+4))==2);
    CHECK(abs(solve(x^2+6*(x)+9))==3);
    CHECK(abs(solve(2x^2-x==0)<=0.5));
    //10
    CHECK_THROWS(solve(4x+5-4x==0));
    CHECK_THROWS(solve(4x+2-4x==0));
    CHECK(solve(x+x-2==10)==6);
    CHECK(abs(solve(x^2==81)==9);

}
TEST_CASE("complex number")
{
     ComplexVariable x;

    CHECK(solve(2*(x)-4==10) == complex(7,0));
    CHECK(solve(x+1 == 0) == complex(-1,0));
    CHECK(solve(x+5==5)==complex(0,0));
    CHECK(solve(x+x-2==10)==complex(6,0));
    CHECK(solve(2x-2x==0)==complex(0,0));
    CHECK(solve(7x-6x==1)==complex(1,0));
    CHECK(solve(2x+2x+2+2==0)==complex(-1,0));
    CHECK(solve(3x+5x==16)==complex(2,0));
    CHECK(solve(3+18+7x==0)==complex(-3,0));
    CHECK(solve(6x==36)==complex(6,0));
    //10
    CHECK(solve(x+complex(-2,2)==0)==complex(2,-2));
    CHECK(solve(x==complex(-2,2)==complex(-2,2));
    CHECK(solve(x+complex(-2,2)+x==0)==complex(1,-1));
    CHECK(solve(2x==complex(-2,2)==complex(-1,1));
    CHECK(solve(2x+complex(4,4))==complex(-2,-2));
    CHECK(solve(x+complex(2,2)+complex(-1,-1)==0)==complex(-1,-1));
    CHECK(solve(x+complex(2,2)==complex(-1,-1))==complex(-3,-3));
    CHECK(solve(x+complex(2,2)==complex(1,1))==complex(-1,-1));
    CHECK(solve(x+complex(2,2)==complex(2,2)-x)==complex(0,0));
    CHECK(solve(4x+complex(0,0)+4==0)==complex(-1,0));
    //20
    







}










}