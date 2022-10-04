#include"isPrime.c"
#include <stdio.h>
#include <stdlib.h>

int isPrime(int i);
int main(){
    int n;
    int nArg;
    printf("Enter a number: ");
   nArg = scanf("%d",&n);

    if(nArg==0)
        printf("Input unsuccessfull\n");
    else 
        printf("Input Successfull\n");

    if(isPrime(n)==0)
        printf("%d is not a prime number\n",n);

    else
        printf("%d is a prime number\n",n);

    return EXIT_SUCCESS;  
}
