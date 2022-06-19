#include<stdio.h>

int main(){
  printf("6. Write a program in C to print all unique elements in an array!\n\n");
  int n, i,j;
  printf("How many elements: ");
  scanf("%d", &n);
  int arr[n], initial[n];
  printf("Enter %d integer numbers: ", n);
  for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    initial[i] = 1;
  }
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(arr[i]==arr[j]){
        initial[j] = 0;
        initial[i] = 0;
      }
    }
  }
  printf("\nUnique elements in the array are: ");
  for(i=0; i<n; i++){
    if(initial[i]==1){
      printf("%d ", arr[i]);
    }else continue;
  }
  return 0;
}
