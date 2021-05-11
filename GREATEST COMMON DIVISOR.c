#include<stdio.h>
int GCD(int,int);
int main(void)
{
    int a,b,result;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    result=GCD(a,b);
    printf("Greatest common divisor of %d and %d is %d",a,b,result);
    return 0;
}
int GCD(int a,int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);

}
