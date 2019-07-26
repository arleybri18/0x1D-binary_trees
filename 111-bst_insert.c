#include "binary_trees.h"
/**
 * binary_tree_is_bst - validate if tree is a Binary Search Tree
 *
 * @tree: node of the tree
 * Return: node sibling or NULL if not exist
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node;
	
	if (*tree == NULL)
	{
		node = binary_tree_node(*tree, value);
		*tree = node;
	}
	else
	{
		if (value < (*tree)->n)
			if ((*tree)->left == NULL)
			{
				node = binary_tree_node(*tree, value);
				(*tree)->left = node;
				return (node);
			}
			else
				bst_insert(&(*tree)->left, value);
		else if (value > (*tree)->n)
			if ((*tree)->right == NULL)
			{
				node = binary_tree_node(*tree, value);
				(*tree)->right = node;
				return (node);
			}
			else
				bst_insert(&(*tree)->right, value);
		else
			return (NULL);
		
	}
	return (node);
}
