#include <stdio.h> 
#include <stdlib.h> 
#include "tree.h"

int main(int argc, char *argv[]){
	tree *t=makeTree(0xff);
	tree other;
	t->left=&other;
	addToTree(t,1,0xffff);
	printf("%p\n", &other);
	free(t);
	return 0;
}
