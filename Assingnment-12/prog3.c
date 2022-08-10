#include<stdio.h>
#include<conio.h>
int oddnumber(int);
int oddnumber(int n)
{
    int odd =0;
     if (n>0)
     {
         oddnumber(n-1);
         if (n%2==0)
         {
            odd = n+1;
            printf(" %d",odd);
         }
         
     }
     
}
int main()
{
    oddnumber(20);
}