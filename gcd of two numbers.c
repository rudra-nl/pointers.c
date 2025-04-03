#include<stdio.h>
#include<stdlib.h>

void gcd(int* a, int* b){
    int temp;
   while(*b!=0){
    temp=*b;
    *b=*a%*b;
    *a=temp;
   }
}
int main () {
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    gcd(&x,&y);
    printf("GCD is %d",x);
    

}