//Description: Program to calculate area and circumference of a circle.
  
#include<stdio.h>
         int main()
         {
             int rad;
             float PI=3.14,area,ci;
             printf("\nenter radius of circle:");
             scanf("%d",&rad);
             area=PI*rad*rad;
             printf("\narea of circle:%f",area);
             ci=2*PI*rad;
             printf("\ncircumference:%f",ci);
             return 0;
        }
