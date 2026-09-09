/* number swipe */

#include <stdio.h>

int main() 
{

int a=0;
int b=0;

printf("enter your first number=");
scanf("%d",&a);

printf("enter your second number=");
scanf("%d",&b);

printf("before swapping a=%d and b=%d\n",a,b);

printf("do you want to swap the numbers? (y/n): ");

char choice;
scanf(" %c", &choice);

printf("after swapping a=%d and b=%d\n",b,a);


return 0;

}