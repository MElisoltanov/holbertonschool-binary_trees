#include "binary_trees.h"

/**
 * binary_tree_uncle - A function that finds the uncle of a node.
 *
 * @node: a pointer to the node to find the uncle.
 *
 * Return: return a pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL.
 *
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
		uncle = grandparent->right;
	else
		uncle = grandparent->left;

	return (uncle);
}

