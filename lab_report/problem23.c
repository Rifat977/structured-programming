#include<stdio.h>

int main(){
  printf("23.Write the code to find the factorial of that number.\n\n");
  int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0){
        printf("Invalid number");
    }else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
  return 0;
}
