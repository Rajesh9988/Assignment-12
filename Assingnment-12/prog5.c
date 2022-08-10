#include<stdio.h>
#include<conio.h>
int even(int);
int even(int n)
{
    if (n>0)
    {
        if (n%2==0)
        {
            even(n-2);
            printf(" %d",n);
        }
        
    }
    
}
int main()
{
    even(10);
}