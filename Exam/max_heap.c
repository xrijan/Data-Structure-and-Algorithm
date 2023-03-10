#include <stdio.h>


void insert(int arr[] , int i){
    int temp;
    temp = arr[i];
    while(i > 1 && temp > arr[i/2]) {
        arr[i] = arr[i/2];
        i = i/2;
    }
    arr[i] = temp;
}


int main(){
    int n ; 
    printf("Enter the number of the elements in the heep\n");
    scanf("%d",&n);
    int arr[30];
    for(int i = 0 ; i < n ; i++ ) {
        scanf("%d",&arr[i]);
    }

    for(int j = 1 ; j < n ; j++) {
        insert(arr,j);
    }

 // max heap
 printf("Max Heap");
    for(int k =0 ; k < n ; k++) {
        printf("%d\n",arr[k]);
    }
    return 0;
}

