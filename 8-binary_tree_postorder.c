#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_postorder - goes through using post-order traversal
 * @tree: tree to traverse through
 * @func: function to print nodes
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
