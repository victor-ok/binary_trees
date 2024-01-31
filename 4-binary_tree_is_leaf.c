#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 *
 * @node: a pointer to the node to check
 *
 * Returns: 1 if node is a leaf and 0 is otherwise
 *          and NULL
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	return (1);
}
