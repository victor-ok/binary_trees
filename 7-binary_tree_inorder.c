#include "binary_trees.h"

/**
 * binary_tree_inorder - func to go thru a binary tree
 *                        using inorder travesal
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 *        The value in the node must be passed as a parameter
 *            to thid function.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
