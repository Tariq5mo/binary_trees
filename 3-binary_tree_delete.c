#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *p, *l, *r, *leaf;

	if (!p)
		return (NULL);
	for (p = tree, p->parent = NULL; p;)
	{
		l = p->left;
		r = p->right;
		if (l)
		{
			p = l;
			l = p->left;
			r = p->right;
		}
		else if (r)
		{
			p = r;
			l = p->left;
			r = p->right;
		}
		else
		{
			leaf = p;
			p = p->parent;
			if (p && p->left == leaf)
				p->left = NULL;
			else if (p && p->right == leaf)
				p->right = NULL;
			free(leaf);
		}
	}
}

