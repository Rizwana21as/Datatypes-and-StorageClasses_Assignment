//Description: Program to Explain all data types including signed and unsigned.

#include<stdio.h>
void main()
{
    char status='y';
    printf("\n character value is:%c",status);

    int a=100;
    printf("\n integer value is:%d",a);

    int b=-100;
    printf("\n signed int  value is:%d",b);

    int c=1000U;
    printf("\n unsigned value is:%u",c);

    long int long_val=3500L;
    printf("\n long int value is:%ld",long_val);

    float d=127.675;
    printf("\n float value is:%f",d);

    float e=1000.5454F;
    printf("\n float value is:%f",e);

    double f=1234567892.12345678900;
    printf("\n character value is:%f",f);
}

