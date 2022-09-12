#include<stdio.h>
//Write a program in C to read n number of values in an array and display it in reverse order.
int main (){

    int arr[100];
    int i;
    int n;
   
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);

   printf("Input %d number of the elements in the array :\n");
   for(i=0; i<n; i++) {
    printf("Elements %d -- " , i);
    scanf("%d" , &arr[i]);
   }

    printf("stored elements :");
    for(i=0;i<n;i++) {
        printf("%d\t" , arr[i]);
    }
    printf("\n");

    printf("\n Reverse elements :");
        for(i=n-1; i>=0; i--) {
            printf("%d\t" , arr[i]);
        }
    printf("\n\n");
}