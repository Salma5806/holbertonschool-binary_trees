#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - goes through using in-order traversal
 * @tree: tree to traverse through
 * @func: function to print nodes
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
