//hashing ... h(x) = x%10
//because of colision use linear probing.
//linear probing  ... h'(x) = ( h(x) + f(i) )%10 where i=0,1,2,3...

#include <stdio.h>
#define SIZE 10

int hash(int key){
    return key%SIZE;
}

int prob(int H[] , int key){
    int index = hash(key);
    int i = 0;

    while(H[index+i]%SIZE != 0){
        i++;
    }
    return (index+i)%SIZE;
}

void insert(int H[] , int key){
    int index = hash(key);

    if(H[index] != 0){
        index = prob( H , key);
    }
    H[index] = key;
    printf("Key %d inserted in %d index \n" , key , index);
}

int search(int H[] , int key) {
    int index = hash(key);
    int i = 0;
    while(H[(index+i%SIZE)] != key){
        i++;
    }
    return (index+i)%SIZE;
}

void del(int H[] , int key) {
    int index = hash(key);
    int i = 0 ;
    while(H[(index+i%SIZE)] != key){
        i++;
    }
    printf("Key %d deleted from index %d",key , index);
    H[(index+i)%SIZE] = -1;
}


int main(){
    int HT[10] = {0};
    insert(HT , 12);
    insert(HT , 25);
    insert(HT , 35);
    insert(HT , 26);
    printf("Key found at index %d\n", search(HT , 25));
    del(HT,25);
    return 0;
}