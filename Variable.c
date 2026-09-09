/* Variable example code */
/*created by akshay*/

#include <stdio.h>  // Include standard input-output header file //

int x= 10;// global variable used in any block of code //

void main() // main function //
{

int a= 5; // local variable that can only be used in this block of code //

int b= 20; // local variable that can only be used in this block of code //

printf("value of global variable x is %d\n",a); // print the value of global variable x //

printf("value of local variable b is %d\n",b); // print the value of local variable b //

{  // new block of code //

    int x=10; // global variable used in any block of code //


printf("the addition of global variable x and local variable y is %d\n",x+a+b); // print the addition of global variable x and local variable y //


}

}
