#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node.
 *
 * @parent: Pointer to the parent node
 * @value: the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightn, *oldn;

	if (!parent)
		return (NULL);
	rightn = malloc(sizeof(binary_tree_t));
	if (!rightn)
		return (NULL);
	rightn->left = rightn->right = NULL;
	rightn->n = value;
	if (parent->right)
	{
		oldn = parent->right;
		oldn->parent = rightn;
		rightn->right = oldn;
	}
	parent->right = rightn;
	rightn->parent = parent;
	return (rightn);
}
