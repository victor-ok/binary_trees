#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node
 *                       is root.
 *
 * @node: a pointer to the node to check
 *
 * Returns: 1 if node is root otherwise 0
 *          if node is NULL 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL || node == NULL)
	{
		return (0);
	}
	return (1);
}
