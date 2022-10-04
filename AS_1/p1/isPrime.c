#include<stdio.h>
int isPrime(int i){
    int n = i/2;
    int flag=1;
    for(j=2; j<n; j++){
        if(i%j==0){
            flag = 0;
            return 0;
        }
    }
    if(flag==0){
        return 1;
    }
}