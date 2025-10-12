
//                 J. Multiples
//          time limit per test1 second
//       memory limit per test256 megabytes
// Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

// Input
// Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

// Output
// Print the "Multiples" or "No Multiples" corresponding to the read numbers.

// Examples
// InputCopy
// 9 3
// OutputCopy
// Multiples
// InputCopy
// 6 24
// OutputCopy
// Multiples
// InputCopy
// 12 5
// OutputCopy
// No Multiples

#include<stdio.h>
int main()
{

   int a,b;
   scanf("%d %d",&a,&b);
   if(a%b == 0)
   {
    printf("Multiples");
   }
   else if(b%a ==0)
   {
    printf("Multiples");
   }
   else
   {
    printf("No Multiples");
   }

    return 0;
}