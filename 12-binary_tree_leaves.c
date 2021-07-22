#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary
 * @tree: a pointer to root node of the tree to count the number of leaves
 * Return: if is NULL, function return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	ssize_t tota_leaves, left_leaves, right_leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	tota_leaves = left_leaves + right_leaves;
	return (tota_leaves);
}
