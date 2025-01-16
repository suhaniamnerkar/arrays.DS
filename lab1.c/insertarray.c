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
return 0;
}
