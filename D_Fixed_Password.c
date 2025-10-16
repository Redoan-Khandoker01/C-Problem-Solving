#include<stdio.h>
int main()
{

   int digit;
   while (scanf("%d",&digit))
   {
    if( digit == 1999)
    {
        printf("Correct\n");
        break;
    }
    else{
        printf("Wrong\n");
    }
   }

   

    return 0;
}