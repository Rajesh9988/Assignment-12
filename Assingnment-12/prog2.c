#include<stdio.h>
#include<conio.h>
int reverse(int);
int main()
{
  reverse(19);
}
int reverse(int n)
{
    int i=0;
     if (n>=1)
     {
        printf(" %d",n);
         reverse(n-1);
     }
     
    
}