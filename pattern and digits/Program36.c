#include<stdio.h>
int main(){
    int a=5,b;
    b=a++>>2&5;
    printf("A is %d\t B is %d\n",a,b);
    
    return 0;
}