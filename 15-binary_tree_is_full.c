#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: is a pointer to the root node of the tree to check.
 * Return: 1 if full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((tree->left && !(tree->right)) || (!(tree->left) && tree->right))
		return (0);
	if (tree->left && binary_tree_is_full(tree->left) == 0)
		return (0);
	if (tree->right && binary_tree_is_full(tree->right) == 0)
		return (0);
	return (1);
}
