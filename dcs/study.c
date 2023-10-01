#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int				x;
	struct Node		*next;
}	Node;

void deallocate(Node** root) {
    Node* curr = *root;
    while (curr != NULL) {
        Node* aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}

void insert_end(Node** root, int value) {
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1);
    }
    new_node->next = NULL;
    new_node->x = value;

    if (*root == NULL) {
        *root = new_node;
        return;
    }

    Node* curr = *root;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new_node;
}

int main(int argc, char* argv[]) {
    Node* root = NULL;

    insert_end(&root, -2);
    insert_end(&root, 11);
    insert_end(&root, 22);

   // Iterate over the linked list with a while loop.
	Node* curr = root;
	while (curr != NULL) {
		printf("%d\n", curr->x);
		curr = curr->next;
	}

    deallocate(&root);

    return 0;
}
