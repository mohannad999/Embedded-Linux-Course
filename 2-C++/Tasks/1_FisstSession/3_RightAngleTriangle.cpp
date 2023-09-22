/*
Calculate the length of the three sides of the triangle by joining the given coordinates.
 Let the sides be A, B, and C. 
The given triangle is right-angled if and only if A2 + B2 = C2. Print Yes if the condition holds true.
*/

#include <iostream>
#include <cmath>
#include <math.h>

bool ChechIsRightAngledTriangle(int A, int B , int C)
{
    if ((int)pow(A, 2) +(int)pow(B, 2) ==(int)pow(C, 2))
    return true;
else
return false;

}

int main()
{// Right Angled triangle value 3,4,5  or 5,12,13
    if(ChechIsRightAngledTriangle(12,5,13))
    std::cout<<"\nture it's right angle\n"<<std::endl;
else 
std::cout<<"\nfalse it's not right angle\n"<<std::endl;

    return 0;
}