#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *
 * @tree:is a pointer to the root node of the tree to check.
 * Return: 1 if perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_balance_cp(tree) == 0 && binary_tree_is_per(tree) == 1)
		return (1);
	return (0);
}
/**
 * binary_tree_balance_cp - Measures the balance factor of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 * Return: the balance factor of a binary tree, or 0 If tree is NULL.
 */
int binary_tree_balance_cp(const binary_tree_t *tree)
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
/**
 * binary_tree_is_per - Checks if all nodes in binary has two children.
 *
 * @tree: is a pointer to the root node of the tree to check.
 * Return: 1 if full, 0 otherwise.
 */
int binary_tree_is_per(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((tree->left && !(tree->right)) || (!(tree->left) && tree->right))
		return (0);
	if (tree->left && binary_tree_is_per(tree->left) == 0)
		return (0);
	if (tree->right && binary_tree_is_per(tree->right) == 0)
		return (0);
	return (1);
}
