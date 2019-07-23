#include "binary_trees.h"

/**
 * binary_tree_height - function that count the height of a tree
 * @tree: the pointer to a tree
 * Return: the height of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 1;
	int right = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left += binary_tree_balance(tree->left);
	if (tree->right != NULL)
		right += binary_tree_balance(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	return (MAX(left, right));
}
