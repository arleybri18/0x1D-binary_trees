#include "binary_trees.h"

/**
 * binary_tree_is_full - validate if tree is full
 *
 * @tree : pointer to root
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int aux = 0;

	if (tree->left != NULL && tree->right != NULL)
	{
		aux = binary_tree_is_full(tree->left);
		aux = binary_tree_is_full(tree->right);
	}
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (0);

	return (aux);

}
