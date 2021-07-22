#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the node to measure the size
 * Return: 0 If tree is NULL, else return the size
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
