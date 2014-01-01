/*  A positive integer is entered through the keyboard, write a */
/* function to find the binary equivalent of this number using */
/* recursion. */


//  getfrmkbd(&x);

#include "header.h"

 #include<stdio.h>


int main(){

    long int decimalNumber, quotient;

    int binaryNumber[100],i=1,j;


    printf("Enter any decimal number: ");

    scanf("%ld",&decimalNumber);


    quotient = decimalNumber;


    while(quotient!=0){

         binaryNumber[i++]= quotient % 2;

         quotient = quotient / 2;

    }


    printf("Equivalent binary value of decimal number %d: ",decimalNumber);

    for(j = i -1 ;j> 0;j--)

         printf("%d",binaryNumber[j]);
    printf("\n");

    return 0;

}
