#include <stdio.h>
#include <conio.h>
int square(int);
int main()
{
    int n = 1;
    square(10);
}
int square(int n)
{
    int a;
    //  square(n*n);
    printf(" %d",n*square(n));
}