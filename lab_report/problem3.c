#include<stdio.h>

int main(){
  printf("3. Write a program in C to find the sum of all elements of the array!\n\n");
  int n, i;
  printf("How many elements: ");
  scanf("%d", &n);
  int arr[n], sum=0;
  printf("Enter %d integer numbers: ", n);
  for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  printf("Sum of elements %d: ", sum);
  return 0;
}
