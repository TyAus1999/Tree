#pragma once
#include <stdlib.h>
#include <stdio.h>

typedef unsigned long long u64;

typedef struct tree{
    struct tree *left;
    struct tree *right;
    struct tree *parent;
    u64 number;
    u64 data;
} tree;

void printTree(tree *t){
    printf("==================\n");
    printf("Left: %p\n",t->left);
    printf("Right: %p\n",t->right);
    printf("Number: %llu\n",t->number);
    printf("Data: %llu\n",t->data);
    printf("==================\n");
}

tree* makeTree(u64 data){
    tree *out=calloc(1,sizeof(tree));
    out->data=data;
    return out;
}

//which: 0=left, 1=right
void addToTree(tree *t, char which, tree *toAdd){
    tree *addressToSet;
    switch(which){
        case 0:
            addressToSet=&*t->left;
            break;
        case 1:
            addressToSet=&*t->right;
            break;
        default:
            return;
    }
    addressToSet=toAdd;
    addressToSet->parent=t;
}

void rec_search(tree *root, tree *toAdd, u64 layer){
    
}

void searchToAdd(tree *root, tree *toAdd){
    if(root->left==0){
        root->left=toAdd;
    }
    else if(root->right==0){
        root->right=toAdd;
    }
    else{
        //Go into one of the nodes

    }
}

void equalizeTree(tree *root){

}

void freeTree(tree *t){

}