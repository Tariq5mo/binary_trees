#include "binary_trees.h"

/**
 * binary_tree_preorder_cp - Go through a binary tree using pre-order traversal
 *
 * @tree: is a pointer to the root node of the tree to traverse.
 * Return:1
 */
size_t binary_tree_preorder_cp(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);
	i++;
	if (tree->left)
		i += binary_tree_preorder_cp(tree->left);
	if (tree->right)
		i += binary_tree_preorder_cp(tree->right);
	return (i);
}
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: The size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (binary_tree_preorder_cp(tree));
}
