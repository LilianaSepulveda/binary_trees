#include "binary_trees.h"

/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: pointer to the node of the tree to check
 * Return: 0 If tree is NULL, else return checks if a binary tree is full
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int child_left = 0;
	int child_rigth = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	if ((tree->left != NULL) && (tree->right != NULL))
	{
		child_left = binary_tree_is_full(tree->left);
		child_rigth = binary_tree_is_full(tree->right);
		if ((child_left == 1) && (child_rigth == 1))
			return (1);
	}
	return (0);
}
