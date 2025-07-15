#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0){
        printf("The no is positive");
    }
    else if(a<0){
    printf("The no is negative");
    }
    return 0;
}