#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts the node as a left-child
 *                           of another in binary tree
 *
 * @parent: pointer to the node to insert the right child in
 * @value: the value to store in the new node.
 *
 * Return: NULL if parent is NULL and error occurs else
 *         a pointer to the new node
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old left-child is set as
 *              the right-child of the new node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
