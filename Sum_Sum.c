#include<stdio.h>
int main()
{

   int n;
   scanf("%d",&n);
   int positive =0;
   int nagetive =0;
   int  arry[n];
   for (int i= 1;i<=n;i++)
   {
    scanf("%d",&arry[i]);
    // printf("%d ",arry[i]);
   }

   for(int i=1;i<=n;i++)
   {
    if(arry[i]>=0)
    {   
        positive =  positive+arry[i];
        // positive++;
    }
    else if(arry[i]<=0)
    {   
        nagetive =nagetive+arry[i];
        // nagetive++;
    }
   }
   printf("%d %d",positive,nagetive);

    return 0;
}