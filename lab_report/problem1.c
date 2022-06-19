#include<stdio.h>

int main(){
  printf("1.Write a program in C to store elements in an array and print it!\n\n");
  int n, i;
  printf("How many elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d integer numbers: ", n);
  for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  printf("Elements are: ");
  for(i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
