//recuisive merge sort

#include <stdio.h>
#include<stdlib.h>

void merge(int A[] , int low , int mid , int high) {
    int B[100];
    int i = low,j=mid+1,k=low;

    while(i<=mid && j<=high){
        if(A[i] < A[j]){
            B[k++] = A[i++];
        }else {
            B[k++] = A[j++];
        }
    }
    for(;i<=mid;i++){
        B[k++] = A[i];
    }

    for(;j<=high;j++){
        B[k++] = A[j];
    }

    for(i = low ; i <= high ; i++){
        A[i] = B[i];
    }
}

void rec_merge_sort(int A[] , int low , int high){
    int mid ;
    if (low < high) {
        mid = (low+high)/2;
        rec_merge_sort(A,low,mid);
        rec_merge_sort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}

int main() {
    int arr[] = {2,5,6,1,8,3,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    rec_merge_sort(arr,0,size-1);
    printf("Array after sorting\n");
    for(int i = 0 ; i < size ; i++ ) {
        printf("%d\n",arr[i]);
    }

    return 0;
}