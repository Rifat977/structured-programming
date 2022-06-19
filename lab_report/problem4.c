#include<stdio.h>

int main(){
  printf("4.  Write a program in C to copy the elements of one array into another array!\n\n");
  int n, i;
  printf("How many elements: ");
  scanf("%d", &n);
  int arr1[n], arr2[n];
  printf("Enter %d integer numbers for array1: ", n);
  for(i=0; i<n; i++){
    scanf("%d", &arr1[i]);
  }
  for(i=0; i<n; i++){
    arr2[i] = arr1[i];
  }
  printf("Elements of array1: ");
  for(i=0; i<n; i++){
    printf("%d ", arr1[i]);
  }
  printf("\n" );
  printf("Elements of array2: ");
  for(i=0; i<n; i++){
    printf("%d ", arr2[i]);
  }
  return 0;
}
