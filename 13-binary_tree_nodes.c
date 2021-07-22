#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the node of tree to count the number of nodes
 * Return: 0 If tree is NULL, else return number of nodes
 * A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		nodes = 1;
	nodes = nodes + binary_tree_nodes(tree->left);
	nodes = nodes + binary_tree_nodes(tree->right);
	return (nodes);
}
