#include<stdio.h>
int main()
{
  printf("21. Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9.\n\n");
    int n,i;
    printf("From 100 to 200 divisible by 9:");
    int sum=0;
    for(i=100;i<=200;i++)
    {
      if(i%9==0){
        printf("%d ", i);
        sum+=i;
      }
    }
    printf("\nSum of those number = %d\n",sum);
}
