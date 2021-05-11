#include<stdio.h>
long int fact(int n);
int main(void)

{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
        printf("No factorial for negative number\n");
    else
    printf("Factorial of %d is %d",num,fact(num));
    return 0;
}
long int fact(int n)
{
    if(n>0)
        return(n*fact(n-1));
    else
        return(1);
}
