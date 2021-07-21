#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the rigth-child
 *                            of another node.
 * @parent: a pointer to a node to insert the right child
 * @value: the value to put in the new node
 * Return: pointer to the new node, or NULL on failure or if
 *         parent is NULL
 *
 * Description: If parent already has a right child, the new node take
 *              its place and the old right child is set as
 *              the right child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
		new->left = NULL;
		new->parent = parent;
	}
	else
	{
		tmp = parent->right;
		parent->right = new;
		new->right = tmp;
		new->left = NULL;
		new->parent = parent;
		tmp->parent = new;
	}
	return (new);
}
