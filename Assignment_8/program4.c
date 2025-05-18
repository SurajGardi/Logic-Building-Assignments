#include<stdio.h>

double FhtoCh(float fTemp)
{
    double dCel = 0.0;

    dCel = (fTemp - 32) * (5.0 / 9.0);

    return dCel;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCh(fValue);

    printf("Temperature in Celsius is : %.4lf",dRet);
    return 0;
}

//  Time Complexity = O(N)