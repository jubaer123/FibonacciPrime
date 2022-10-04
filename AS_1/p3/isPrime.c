#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int isPrime(int i){
    int j;
    int flag=1;
    if(i==0 || i==1){
	return 1;
    }

    for(j=2; j<=i/2; j++){
        if(i%j==0){
            flag = 0;
	    break;
        }
    }
    return flag;
}
