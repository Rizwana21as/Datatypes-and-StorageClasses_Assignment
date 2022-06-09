//Description: Program to explain all storage classes scope.

#include<stdio.h>
extern i=5;
int main()
{
register char x='s';
    static int c=6;
   //static int c=7;
    printf("Static value:%d\n",c);
    auto int j=1;
    {
        auto int j=2;
        {
            auto int j=3;
            printf("Auto values:%d",j);
        }
        printf("\t%d",j);
        
    }
    printf("\t%d\n",j);
    printf("value of the external integer is=%d\n",i);
    printf("value of the register character is=%c\n",x);
    return 0;
}
