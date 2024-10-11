#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of a binary tree, or 0 If tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}
/**
 * height - Measures the height of a root
 *
 * @tree: a pointer to the root node
 * Return: The height, or -1 if tree is Null
 */
int height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (-1);
	height_left = height(tree->left);
	height_right = height(tree->right);
	if (height_left >= height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
