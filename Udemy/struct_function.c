#include<stdio.h>
struct Rectangle {
    int length;
    int breadth;
};

void init(struct Rectangle *_ , int l , int b) {
    _ ->length = l;
    _ ->breadth = b;
}

void area(struct Rectangle *_) {
    int area = _ ->length * _ ->breadth;
  printf("The area of the rectangle is %d\n",area);
} 

void change(struct Rectangle *_){
    int c;
    char change;
    printf("Enter l to change length and b to change the breadth\n");
    scanf("%c",&change);
    if(change == 'l'){
         printf("Enter the length \n");
         scanf("%d",&c);
       _ ->length = c;
    }else{
         printf("Enter the breadth \n");
         scanf("%d",&c);
        _ ->breadth =c;
    }
}

void PRINT(struct Rectangle r) {
   printf("The length and breadth of your rectangle is %dl and %db",r.length,r.breadth);
}
int main() {
    struct Rectangle r;
    init(&r,10,23);
    area(&r);
    change(&r);
    area(&r);
    return 0;
}
