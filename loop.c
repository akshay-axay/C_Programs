// writing a code with loop statements //

#include <stdio.h>

int main()
{

int a= 0;
int b= 1;

int i;
for(i=0; i<15; i++)
{
    printf("%d %d\n", a, b);
    int c= a+b;
 a= b;
b= c;
}
}
