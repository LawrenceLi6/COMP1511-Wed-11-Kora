#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

void printList(List l) {

}

int main(int argc, char* argv[]) {
	int a[] = {1,2,3,4,5};
	List l = arrayToList(a,5);
	printList(l);
	return EXIT_SUCCESS;
}


List arrayToList(int array[], int n) {
	List l = newList();
	int i = 1;
	l->head = newNode(array[0]);
	Node curr = l->head;
	while (i<n) {
		curr->next = newNode(array[i]);
		curr = curr->next;
		i++;
	}
	return l;
}
