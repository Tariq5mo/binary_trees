#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * of another node.
 *
 * @parent: Pointer to the parent node
 * @value: the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftn, *oldn;

	if (!parent)
		return (NULL);
	leftn = malloc(sizeof(binary_tree_t));
	if (!leftn)
		return (NULL);
	leftn->left = leftn->right = NULL;
	leftn->n = value;
	if (parent->left)
	{
		oldn = parent->left;
		oldn->parent = leftn;
		leftn->left = oldn;
	}
	parent->left = leftn;
	leftn->parent = parent;
	return (leftn);
}
