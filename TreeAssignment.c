#include <stdio.h> 
#include <stdlib.h> 
#include "tree.h"

typedef unsigned long long u64;

int main(int argc, char *argv[]){
	tree *t=makeTree(0xff);
	tree other;
	t->left=&other;
	addToTree(t,1,(u64)0xffff);
	printTree(&other);
	printTree(t);
	free(t);
	return 0;
}
