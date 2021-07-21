#include "binary_trees.h"

/**
 * binary_tree_delete - Delete a binary tree
 *
 * @parent: a pointer to a node to insert the right child
 * @value: the value to put in the new node
 * Return: pointer to the new node, or NULL on failure or if
 *         parent is NULL
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
 }
