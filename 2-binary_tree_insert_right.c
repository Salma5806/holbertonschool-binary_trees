#include "binary_trees.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: is a pointer to the node to insert the right-child in
* @value: the value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = newnode;
		newnode->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = newnode;
		newnode->right = temp;
		newnode->parent = parent;
		temp->parent = newnode;
	}
	return (newnode);
}
