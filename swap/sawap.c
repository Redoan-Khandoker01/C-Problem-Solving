#include<stdio.h>
int main()
{

   int a = 10;
   int b= 20;
   
   int tem= a;
   a =b;
   b = tem;
   printf("A = %d\n B =  %d", a,b);

    return 0;
}