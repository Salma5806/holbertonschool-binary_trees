#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node.
 * @node: node to find uncle for.
 *
 * Return: pointer to uncle or else NULL;
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	temp = NULL;

	if (node == NULL)
		return (NULL);

	temp = node->parent;

	if (temp->parent == NULL)
		return (NULL);

	if (temp->parent->left && temp->parent->left != temp)
		return (temp->parent->left);
	else if (temp->parent->right && temp->parent->right != temp)
		return (temp->parent->right);

	return (NULL);
}
