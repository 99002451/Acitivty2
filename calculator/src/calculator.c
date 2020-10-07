#include "calculator.h"
#include<math.h>
#define pi 3.14
float square(float num1)
{
    return num1*num1;
}
float cube(float num1)
    {
        float result;
        result = pow(num1,3);
        return result;
    }
float sum(float num1, float num2)
{
  return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1-num2;
}
float multiply(float num1, float num2)
{
    return num1*num2;

}
float divide(float num1, float num2)
{

    if(num2==0)

    {
        return -1;
    }
    else
    {
        return num1/num2;
    }
}
float factorial(float num1)
{
    if (num1 == 0)
        {
        return 1;
       }
    else
    {
     return num1*factorial(num1-1);
    }
}
float power(float num1, float num2)
{
    if(num2==0)
    {
        return 1;
    }
    else
        {
       return pow(num1, num2);
    }
}
float squareroot(float num1)
{
    if(num1<0)
    {
        return -1;
    }
    else
    {
     return sqrt(num1);
    }
}
float sine(float num1)
{

    return sin(num1);
}
float cosine(float num1)
{

    return cos(num1);
}
float tan_func(float num1)
{
    if(num1==pi/2)
    {

        return -1;
    }
    else
        {

    return tan(num1);
    }
}
int bitwise_or(int num1, int num2)
{

    return num1|num2;
}
int bitwise_and(int num1, int num2)
{

    return num1&num2;
}
int xor(int num1, int num2)
{

    return num1^num2;
}
float logarithmicvalue(float num1)
{

    return log(num1);
}
float log_base10(float num1)
{

    return log10(num1);
}
float asine(float num1)
{
    if((num1>-1)&&(num1<1))
    {
      return asin(num1);
    }
    else
        {
        return -1;
    }
}
float acosine(float num1)
{
    if((num1>-1)&&(num1<1))
    {
      return acos(num1);
    }
    else
        {
        return -1;
    }
}
float atan_value(float num1)
{

    return atan(num1);
}
float atan2value(float y, float x)
{
    return atan2(y,x);
}
float tanhvalue(float num1)
{

    return tanh(num1);
}
float sinhvalue(float num1)
{

    return sinh(num1);
}
float coshvalue(float num1)
{

    return cosh(num1);
}
float exponent(float num1)
{

    return exp(num1);
}
float sum_upto_n(float num1)
{
    int i;
    float sum = 0;
    for(i = 1; i<=num1;i++){
        sum = sum + i;
    }
    return sum;
}
float ceilvalue(float num1)
{

    return ceil(num1);
}

float floor_func(float num1)
{

    return floor(num1);
}
float fabsvalue(float num1)
{

    return fabs(num1);
}
