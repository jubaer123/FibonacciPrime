
#include "isPrime.c"
#include "isFib.c"
#include<stdio.h>
#include<stdlib.h>

int min(int x, int y);
int max(int x, int y);
int main(){

    int nArg;
    int i;
    int x;
    int y;
    printf("Enter a number: ");
    nArg = scanf("%d %d",&x, &y);

    int a=min(x,y);
    int b=max(x,y);

    if(nArg==2)
        printf("Input Successfull\n");
    else 
        printf("Input Unsuccessfull\n");

    for(i=a; i<=b; i++){
        if(isPrime(i)==1 && isFib(i)==1){
            printf("%d ", i);
        }
    }

    return EXIT_SUCCESS;  
}

int min(int x, int y){
    if(x<y)
        return x;
    else 
      return y;
}

int max(int x, int y){
    if(x>y)
        return x;
    else 
        return y;
}