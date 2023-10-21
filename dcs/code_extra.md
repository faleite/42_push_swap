# EXTRA CODE 

```c
/* Option use fct insert_end (note good) */
void	rotate(t_stack **node)
{
	t_stack *curr;
	
	if (!node || !(*node)->next)
		return ;
	curr = *node;
	*node = (*node)->next;
	insert_end(node, curr->x);
	free(curr);
}

/* Option use fct insert_begin and remove_element (note good) */
void	rrotate(t_stack **node)
{
	t_stack *curr;
	
	if (!node || !(*node)->next)
		return ;
	curr = *node;
	while (curr && curr->next)
		curr = curr->next;
	insert_begin(node, curr->x);
	remove_element(node, curr->x);
}

void	insert_begin(t_stack **root, int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		exit(1);
	new_node->nbr = value;
	new_node->next = *root;
	*root = new_node;
}

/* Remove an element of the stack (except the first element) */
void	remove_element(t_stack **root, int value)
{
	t_stack	*to_remove;
	t_stack	*curr;

	if (!*root)
		return ;
	curr = *root;
	while (curr && curr->next)
	{
		if (curr->next->nbr == value)
		{
			to_remove = curr->next;
			curr->next = curr->next->next;
			free(to_remove);
			return ;
		}
		curr = curr->next;
	}
}

void	print_nbr(t_stack *node)
{
	t_stack	*curr;

	curr = node;
	while (curr != NULL)
	{
		printf("%d ", curr->nbr);
		curr = curr->next;
	}
}

void	print_best(t_stack *node)
{
	t_stack	*curr;

	curr = node;
	printf("Friend: ");
	while (curr != NULL)
	{
		printf("%d ", curr->best);
		curr = curr->next;
	}
}

void	print_index(t_stack *node)
{
	t_stack	*curr;

	curr = node;
	printf("Index: ");
	while (curr != NULL)
	{
		printf("%d ", curr->index);
		curr = curr->next;
	}
}

void	print_cost(t_stack *node)
{
	t_stack	*curr;

	curr = node;
	printf("Cost: ");
	while (curr != NULL)
	{
		printf("%d ", curr->cost);
		curr = curr->next;
	}
}

/* PRINTS */
printf("Stack A:\n");
print_nbr(a);
printf("\nStack B:\n");
print_nbr(b);
printf("------\n");
printf("------\n");
```
