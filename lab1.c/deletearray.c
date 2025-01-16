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
  //deleting an element in array
  printf("Enter the position of element that you want to delete: ");
    scanf("%d",&m);
    if(m<n){
    for(int k=m-1;k<n-1;k++){
        arr[k]=arr[k+1];
    }
    printf("The resulting array is: ");
    for(int l=0;l<n-2;l++){
        printf("%d, ",arr[l]);
    }
    printf("%d.",arr[n-1]);
    }
    else{
        for(int l=0;l<n-1;l++){
        printf("%d, ",arr[l]);
    }
    }
return 0;
}
