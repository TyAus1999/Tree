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

tree* makeTree(u64 data){
    tree *out=calloc(1,sizeof(tree));
    out->data=data;
    return out;
}

//which: 0=left, 1=right
void addToTree(tree *t, char which, u64 data){
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
    addressToSet=makeTree(data);
    addressToSet->parent=t;
}

