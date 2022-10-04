#include<stdio.h>

int isFib(int i) {
    int a,b,c;
    if((i==0)||(i==1))
       return 1;
 else
 {
   a=0;
   b=1;
   c=a+b;
   while(b<i)
   {
     c=a+b;
     a=b;
     b=c;
   }
   if(b==i)
    return 1; 
    
   else
    return 0;
 }
 return 0;
}
