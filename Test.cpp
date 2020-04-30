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
    CHECK(abs(solve(x*x==64)==8);
    CHECK(abs(solve(3*3*x*x==81))==3);
    CHECK(abs(solve(3*3*x*x==9*9))==3);
    CHECK(abs(solve(3*3*x*x==3*3*3*3))==3);
    CHECK(solve(2*2*x+2*2-2*x-2==0)==1);
    CHECK(solve(3^2*x==3^2)==1);
    //20
    CHECK_THROWS(solve(3^2*x+2==3^2*x));
    CHECK_THROWS(solve(3^2*(x^2)+20*x==-24));
    CHECK_THROWS(solve(2*(x^2)+7*(x^2)+20*x==-24));
    CHECK_THROWS(solve(3^2*(x^2)+20*x+12==-12));
    CHECK_THROWS(solve(2x+2==2x+2));
    CHECK_THROWS(solve(x+x-2x+2==2));
    CHECK_THROWS(solve(x*x==x^2));
    CHECK_THROWS(solve(x*x+2==x^2+1);
    CHECK_THROWS(solve(x*x+3*x+1==x^2+x+2*x+1));
    CHECK_THROWS(solve(x*x+3*x+1-(x^2+x+2*x+1)==0);
    //30
    CHECK(abs(solve(4*x^2+8*x+2))-1.70710<=0.0001);
    CHECK(abs(solve(4*x^2-8*x+2))-1.70710<=0.0001);
    CHECK(abs(solve(2*x^2+2*x-2))-1.61803<=0.0001);
    CHECK(solve(x*x-2*x+1==0)==1);
    CHECK(solve(2*(x^2)-2*x+1==x*x)==1);
    CHECK(solve(2*(x^2)-2*x-2*x+2==0)==1);
    CHECK(solve(2*(x^2)+2==4x)==1);
    CHECK(solve(9*(x^2)-6*9*x+80==-1)==3);
    CHECK(solve(x^2-x*x+2x==2)==1);
    CHECK(solve(3*x+2*x==25)==5);
    //40
    CHECK(solve(x^2+23x+132==0)-11<=1);
    CHECK_THROWS(solve(4*x^2-x-48=3*x^2-12+3*x));
    CHECK(solve(16*x-7==-71)==-4);
    CHECK_THROWS(solve(121x^2-110x==4));
    CHECK_THROWS(solve(32x^2+18x-17==0));
    CHECK_THROWS(solve(56x^2+27==89x-8));
    CHECK_THROWS(solve(42x^2-69x+20=7x^2-8));
    CHECK(abs(solve(6*2*x*x-12==0))==1);
    CHECK(abs(solve(36x^2-1==0))-0.1666666<=0.00001);
    CHECK(solve(2*x-4==10)==7);
    //50

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
    CHECK(solve(4*x+12==0)==complex(-3,0));
    CHECK(solve(4*x+complex(4,12)==0)==complex(-1,-3));
    CHECK(solve(4*x+complex(2,4)+4==0)==complex(-1.5,-1));
    CHECK(solve(6*x+8==complex(8,6)==complex(0,1)));
    CHECK(solve(x==complex(0,1)+1)==complex(1,1));
    CHECK(solve(2*x=3*x)==complex(0,0));
    CHECK(solve(5*x-4*x==12)==complex(12,0));
    CHECK(solve(40x==10)==complex(4,0));
    CHECK(solve(12+3*4*x==18)==complex(0.5,0));
    CHECK(solve(4*3+4*3*x==18)==complex(0.5,0));
    //30
    CHECK(solve(2*x*6==12)==complex(1,0));
    CHECK(solve(2*x*6-6==6)==complex(1,0));
    CHECK(solve(x+complex(6,0)==0)==complex(-6,0));
    CHECK(solve(2*6*x+complex(-6,0)==complex(6,12))==complex(1,1));
    CHECK(solve(12*x+complex(-6,0)==complex(-6,-12))==complex(-1,-1));
    CHECK(solve(12*x+complex(-6,0)==complex(-6,12))==complex(-1,1));
    CHECK(solve(2x-2x+2-2==0)==complex(0,0));
    CHECK(solve(x+1+complex(1,1)==0)==complex(-1,-2));
    CHECK(solve(2x+4+complex(-2,-2)==0)==complex(-1,1));
    CHECK(solve(4x+4+complex(-2,-2)==0)==complex(-0.5,0.5));
    //40
    CHECK(solve(x*complex(1,1)==complex(1,1,))==complex(1,1));
    CHECK(solve(x*complex(1,1)+complex(2,2)==0)==complex(-2,2));
    CHECK(solve(2*x*complex(1,1)==complex(1,1))==complex(0.5,0.5));
    CHECK(solve(4*x*complex(1,1)+complex(1,1)==complex(9,9))==complex(2,2));
    CHECK(solve(2*complex(2,2)==2*complex(2,2))==complex(1,1));
    CHECK(solve(x*complex(1,1)+x*complex(2,2)==complex(3,3))==complex(1,1));
    CHECK(solve(x*complex(1,1)+x*complex(2,2)+complex(3,3)==0)==complex(-1,-1));
    CHECK(solve(x*complex(1,1)+x*complex(-1,-1)==0)==complex(0,0));
    CHECK(solve(x*complex(1,1)+x*complex(1,1)==1)==complex(0.25,-0.25));
    CHECK(solve(x*complex(1,1)+x*complex(1,1)==-2)==complex(-0.5,0.5));
    CHECK(solve(x*complex(1,1)+x*complex(1,1)==4)==complex(1,-1));
    //50

    

}
