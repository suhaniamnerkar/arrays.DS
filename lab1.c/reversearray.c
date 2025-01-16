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
  //reverse the array
  int start = 0, end = n - 1, temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    printf("The reversed array is: ");
    for(int f=0;f<n;f++){
        printf("%d, ",arr[f]);
    }
return 0;
}
