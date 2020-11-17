//Program to find whether a year is leap or not
#include <stdio.h>
int main(void)

{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%100!=0)
    {
        if(year%4==0)
            printf("Leap year\n");
        else
            printf("Not leap year\n");
    }
    else
    {
        if(year%400==0)
            printf("Leap year\n");
        else
            printf("Not year\n");
    }
  return 0;
}
