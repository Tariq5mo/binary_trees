#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	return (measure_height_binary_tree(tree) - 1);
}
/**
 * binary_tree_is_leaff - Checks if a node is a leaf.
 *
 * @node: A pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaff(const binary_tree_t *node)
{
	if (node && !(node->left) && !(node->right))
		return (1);
	return (0);
}
/**
 * measure_height_binary_tree - Recursive fucntion to measure the height.
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: The height of the binary tree.
 */
size_t measure_height_binary_tree(const binary_tree_t *tree)
{
	size_t i = 0, j;

	if (tree->left && binary_tree_is_leaff(tree->left) == 0) /* is subtree */
	{
		j = measure_height_binary_tree(tree->left);
		if (j > i)
			i = j;
	}
	if (tree->right && binary_tree_is_leaff(tree->right) == 0) /* is subtree */
	{
		j = measure_height_binary_tree(tree->right);
		if (j > i)
			i = j;
	}
	if (binary_tree_is_leaff(tree->left) == 1)
	{
		j = measure_height_binary_tree(tree->left);
		if (j > i)
			i = j;
	}
	if (binary_tree_is_leaff(tree->right) == 1)
	{
		j = measure_height_binary_tree(tree->right);
		if (j > i)
			i = j;
	}
	return (i + 1);
}
