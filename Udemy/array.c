#include<stdio.h>

void PRINT(int *arr , int size){
      printf("Prenting the elements in the array\n");
        for(int i=0 ; i < size ; i++){
        printf("%d\n",arr[i]);
    }
}

void sort(int *arr , int size){
  printf("Printing the sorted array\n");
    for(int i=0 ; i < size ; i++){
        for(int j = i +1 ; j < size ; j++){
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d\n",arr[i]);
    }
}

void insert(int *arr , int size , int element ){
    int new = size + 1;
    arr[size] = element;
    sort(arr,new);
}

void delete(int *arr , int size ,  int element ){
    int new;
    int flag = 0;
    for(int i = 0 ; i < size ; i++) {
        if(arr[i] == element){
            arr[i] = arr[i+1];
            new = size -1 ;
            flag = 1;
        }
    }
    if(flag == 0){
        printf("Unable to find the element");
    } else{
        PRINT(arr , new);
    }
}

int main() {
    int arr[5] = {4,1,3,5,1};
    //sorting the array 
    sort(arr,5);
    //inserting new element in the array
    insert(arr,5,9);
    delete(arr,5,4);


}

