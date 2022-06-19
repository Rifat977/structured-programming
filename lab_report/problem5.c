#include<stdio.h>

int main(){
  printf("5.  Write a program in C to count a total number of duplicate elements in an array.\n\n");
  int n, i, j, count=0;
  printf("How many elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d integer numbers: ", n);
  for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  printf("Elements are: ");
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(arr[i]==arr[j]){
        count++;
        break;
      }
    }
  }
  printf("\nTotal duplicate numbers are: %d", count);
  return 0;
}
