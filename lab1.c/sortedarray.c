#include<stdio.h>
int main(){
    int n,m,a,b,e;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the values in the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements stored in the array are: ");
    for(int j=0;j<n-1;j++){
        printf("%d, ",arr[j]);
    }
    printf("%d.\n",arr[n-1]);
   //Bubble sort technique
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
           
            if (arr[j] > arr[j+1]) {
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}
