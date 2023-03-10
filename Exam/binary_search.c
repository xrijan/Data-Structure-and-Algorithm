#include <stdio.h>

int binarySearch(int A[] , int low , int high , int key){
    int mid;
    if(low <= high){
        mid = (low+high)/2;
        if(key == A[mid]){
            return mid;
        }else if (key < A[mid]) {
            return binarySearch(A,low , mid-1,key);
        }else{
            return binarySearch(A,mid+1,high,key);
        }
    }
    return -1;
}

int main() {
    int arr[] = {2,5,6,1,8,3,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    binarySearch(arr,0,size-1,3) ? printf("Element not found") : printf("Element found");
    return 0;
}