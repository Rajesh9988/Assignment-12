#include<stdio.h>
#include<conio.h>
int evenrev(int);
int evenrev(int n)
{
    if (n>0)
    {
      if (n%2==0)
      {
        printf(" %d",n);
        evenrev(n-2);
      }
      
    }
    
}
int main()
{
    evenrev(10);
}