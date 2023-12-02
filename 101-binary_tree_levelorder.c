#include "binary_trees.h"

/**
 * get_children - function that appends parents children linked list.
 * @head: ptr to head of linked list where children will be appended.
 * @parent: ptr to node whose children we want to append.
 * Return: ptr to head of linked list of children.
 */
ll *get_children(ll *head, const binary_tree_t *parent)
{
	if (parent->left)
		head = append(head, parent->left);
	if (parent->right)
		head = append(head, parent->right);
	return (head);
}

/**
 * append - function that adds a new node at the end of a linked-list
 * @head: ptr to head of linked list
 * @btnode: const binary tree node to append
 * Return: NULL on failure or ptr to the head
 */
ll *append(ll *head, const binary_tree_t *btnode)
{
	ll *new_node = NULL, *last = NULL;

	new_node = malloc(sizeof(*new_node));
	if (new_node)
	{
		new_node->node = btnode;
		new_node->next = NULL;
		if (!head)
			head = new_node;
		else
		{
			last = head;
			while (last->next)
				last = last->next;
			last->next = new_node;
		}
	}
	return (head);
}

/**
 * free_list - A functin that frees all the nodes in a linked list
 * @head: ptr to the head of list_t linked list
 */
void free_list(ll *head)
{
	ll *ptr = NULL;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
