#include <stdio.h>
#include <stdlib.h>

struct NODE {                          
    //has a pre member                //    [left DATA right]                               
    struct NODE *left;                // [l,D,r]          [l,D,r]
    struct NODE *right;           // [l,D,r] [l,D,r]  [l,D,r] [l,D,r] 
    int data;
};

//empty
struct NODE *root = NULL;

void insert (int key) {
    struct NODE *t = root;
    struct NODE *r , *p;

    if (root == NULL) {
        p = (struct NODE *) malloc(sizeof(struct NODE));
        p->data = key;
        p->left = NULL;
        p->right = NULL;
        root = p;
        return;
    }

   //search for key
    while(t != NULL) {
        r = t;
        if(key <  t->data) {
            t = t->left;
        } else if (key > t ->data){
            t = t->right;
        }
        else 
            return;
    }

        p = (struct NODE *) malloc(sizeof(struct NODE));
        p->data = key;
        p->left = NULL;
        p->right = NULL;

        if(key < r->data) {
            r->left = p;
        } else {
            r->right = p;
        }
}

void inorde (struct NODE *p ) {
    if(p) {
        inorde(p->left);
        printf("%d\n",p->data);
        inorde(p->right);
    }
}


int main () {
     
     struct NODE *temp;
    insert(20);
    insert(10);
    insert(5);
    insert(4);
    insert(15);
    insert(11);
    insert(12);
    inorde(root);
    printf("\n");
    return 0;
}