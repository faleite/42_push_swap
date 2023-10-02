#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int x;
    struct Node* next;
    struct Node* prev;
} Node;

void deallocate(Node** tail, Node** head) {
    if (*tail == NULL) {
        return;
    }

    Node* curr = *tail;
    while (curr->next != NULL) {
        curr = curr->next;
        free(curr->prev);
    }
    free(curr);

    *tail = NULL;
    *head = NULL;
}

void insert_beginning(Node** tail, int value) {
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1);
        return;
    }

    new_node->x = value;
    new_node->prev = NULL;
    new_node->next = *tail;
    (*tail)->prev = new_node;
    *tail = new_node;
}

void insert_end(Node** head, int value) {
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(3);
        return;
    }

    new_node->x = value;
    new_node->next = NULL;
    new_node->prev = *head;
    (*head)->next = new_node;
    *head = new_node;
}

void init(Node** tail, Node** head, int value) {
    Node* new_node = malloc(sizeof(int));
    if (new_node == NULL) {
        exit(2);
        return;
    }

    new_node->x = value;
    new_node->prev = NULL;
    new_node->next = NULL;

    *tail = new_node;
    *head = new_node;
}

void	insert_after(Node *node, int value)
{
	Node	*new_node = malloc(sizeof(Node));

	if (new_node == NULL)
		return ;

	new_node->x = value;
	new_node->prev = node;
	new_node->next = node->next;

	if (node->next != NULL)
		node->next->prev = new_node;
	node->next = new_node;
}

void	remove_node(Node *node)
{
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	free(node);
}

Node	*find_node(Node *tail, int value)
{
	Node	*curr = tail;

	while (curr != NULL)
	{
		if (curr->x == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}

Node	*find_node_recursive(Node *node, int value)
{
	if (node == NULL)
		return (NULL);
	if (node->x == value)
		return (node);

	return (find_node_recursive(node->next, value));
}

void	reverse(Node **tail, Node **head)
{
	Node	*curr = *tail;

	while (curr != NULL)
	{
		Node	*next = curr->next;

		curr->next = curr->prev;
		curr->prev = next;

		curr = next;
	}

	Node	*aux = *tail;
	*tail = *head;
	*head = aux;
}

int main(int argc, char* argv[]) {
    Node* tail = NULL;
    Node* head = NULL;

    // init(&tail, &head, 7);
    // insert_beginning(&tail, 3);
    // insert_beginning(&tail, 1);
	reverse(&tail, &head);

    Node* curr = tail;
    while (curr != NULL)
    {
        printf("%d ", curr->x);
        curr = curr->next;
    }

    deallocate(&tail, &head);

    return 0;
}
