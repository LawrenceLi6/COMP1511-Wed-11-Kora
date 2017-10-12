#include <stdio.h>
#include <stdlib.h>

typedef struct _node *Node;
typedef struct _list *List;

typedef struct _list {
    Node head;
} list;

typedef struct _node {
    int value;
    Node next;
} node;


// creating a node
Node createNode(int value) {
	Node new = calloc(1,sizeof(node));
	new->next = NULL;
	new->value = value;
	return new;
}

// creating a list
List createList() {
	List l = calloc(1,sizeof(list));
	l->head = NULL;
	return l;
}

// adding nodes to a list
// should this return something?
// what might be useful
void addNode(List l, Node n) {
	if (l->head == NULL) {
		l->head = n;
	} else {
		Node curr;
		curr = l->head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = n;
	}
}

// removing nodes from a list
// what other functions might be useful?
void removeNode(List l, Node n) {

}

// traversing the list
void printList(List l) {
	Node curr;
	curr = l->head;

	while (curr != NULL){
		printf("%d\n", curr->value);
		curr = curr->next;
	}

}

// tests
int main(int argc, char* argv[]) {
	List l = createList();
	printList(l);
	return EXIT_SUCCESS;
}