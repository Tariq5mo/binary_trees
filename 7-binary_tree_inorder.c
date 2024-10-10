#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (binary_tree_is_leaf(tree->left) == 0)
		binary_tree_inorder(tree->left, func);
	else
		func(tree->left->n);
	func(tree->n);
	if (binary_tree_is_leaf(tree->right) == 0)
		binary_tree_inorder(tree->right, func);
	else
		func(tree->right->n);
}
/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @node: A pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !(node->left) && !(node->right))
		return (1);
	return (0);
}
