#include <stdio.h>
#include <conio.h>
int oddrev(int);
int oddrev(int n)
{ 
    if (n ==-1)
    {
       return 1;
    }
    else
    {
        printf(" %d",n);
          oddrev(n-2);
    }
    
}
int main()
{
    oddrev(15);
    return 0;
}