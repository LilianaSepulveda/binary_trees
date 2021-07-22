#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, h_left = 0, h_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		height = h_left;
	else
		height = h_right;
	return (height + 1);
}
