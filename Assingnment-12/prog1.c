#include<stdio.h>
#include<conio.h>
int natural(int);
int main()
{
  natural(6);
}
int natural(int n)
{
    if (n>0)
    {
        natural(n-1);
        printf(" %d",n);
    }
    
}