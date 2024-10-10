#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 *
 * @tree: is a pointer to the node to measure the depth.
 * Return: The depth of the binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *node;
	size_t i;

	if (!tree)
		return (0);
	for (node = (binary_tree_t *)tree, i = 0; node; i++)
	{
		node = node->parent;
	}
	return (i - 1);
}
