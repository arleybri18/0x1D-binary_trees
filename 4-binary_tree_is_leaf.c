#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: the node to delete
 * Return: 1 if is a leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return;
	if (node->parent != NULL)
	{
		if (node->left != NULL && node->right != NULL)
			return (0);
		else
			return (1);
	}
	return (0);
}
