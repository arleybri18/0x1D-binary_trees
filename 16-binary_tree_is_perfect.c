#include "binary_trees.h"

/**
 * binary_tree_is_perfect - validate if tree is full
 *
 * @tree : pointer to root
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leaves = 0, depth = 0;
	size_t tree_full = 0;
	size_t cont = 0;

	if (tree == NULL)
		return (0);

	/* return number of leaves*/
	leaves = binary_tree_leaves(tree);
	/* return depth of the tree*/
	depth = binary_tree_depth(tree);
	/* calculate total leaves full tree*/
	while (cont < depth)
	{
		tree_full += 2;
		cont++;
	}
	/* validate if leaves is equal to awaiting total tree*/
	if (leaves == tree_full)
		return (1);
	return (0);
}

/**
 * binary_tree_leaves - count the number of leaves
 *
 * @tree: node of the tree
 * Return: number of leaves, or 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		leaves += binary_tree_leaves(tree->left);
	if (tree->right)
		leaves += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		leaves++;
		return (leaves);
	return (leaves);

}

/**
 * binary_tree_depth - function that see how deep is a node
 * @tree: the pointer to the tree
 * Return: the deep of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 1;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		deep += binary_tree_depth(tree->parent);
		return (deep);
	}
	return (0);

}
