#include <stdio.h>

void main()
{

int a=10;
short b=5;
long c=15;

char d='A';

float e=3.14;
double f=2.15;

printf("size of bytes used by int is %d\n",sizeof(a));

printf("size of bytes used by short is %d\n",sizeof(b));

printf("size of bytes used by long is %d\n",sizeof(c));

printf("size of bytes used by char is %d\n",sizeof(d));

printf("size of bytes used by float is %d\n",sizeof(e));

printf("size of bytes used by double is %d\n",sizeof(f));
    
}