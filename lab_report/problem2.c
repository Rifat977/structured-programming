#include<stdio.h>

int main()
{
  printf("2.Write a program in C to read n number of values in an array and display it in reverse order.!\n\n");
    int n,i;
    printf("How many elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter N integer numbers: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Reverse elements are: ");
    for(i = n-1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}
