#include "binary_trees.h"

/**
 * binary_tree_leaves - Inserts a node as the left-child of another node.
 * @tree: a pointer to parent of the node to create
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
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
