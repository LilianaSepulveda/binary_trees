#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: if tree is NULL, funtion return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t bt_size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		bt_size = bt_size + binary_tree_size(tree->left);
	if (tree->right != NULL)
		bt_size = bt_size + binary_tree_size(tree->right);
	bt_size = bt_size + 1;
	return (bt_size);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect (true)
 *         0 if it`s false, If tree is NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_size, right_size;

	if (tree == NULL)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	if (left_size == right_size)
		return (1);
	return (0);
}
