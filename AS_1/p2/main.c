#include "isFib.c"
#include<stdio.h>
#include<stdlib.h>
int mainFib(){
    int n;
    int nArg;
    printf("Enter a number: ");
    nArg = scanf("%d",&n);

    if(nArg==0)
        printf("unsuccessfull\n");
    else 
        printf("Successfull\n");

    if(isFib(n)==0)
        printf("%d is not in fibonacci sequence\n",n);
    else
        printf("%d is in fibonacci sequence\n",n);
    
    return EXIT_SUCCESS;      
}
