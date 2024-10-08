#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	ptr = malloc(sizeof(binary_tree_t));
	if (!ptr)
		return (NULL);
	ptr->n = value;
	ptr->parent = parent;
	ptr->left = ptr->right = NULL;
	return (ptr);
}
