#include "binary_trees.h"

/**
 * binary_tree_is_full -  a function that checks if
 * a binary tree is full.
 *
 * @tree: is a pointer to the root node of the tree to check.
 *
 * Return: tree is NULL, your function must return 0.
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_subtree_full;
	int right_subtree_full;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);


	left_subtree_full = binary_tree_is_full(tree->left);
	right_subtree_full = binary_tree_is_full(tree->right);

	if (left_subtree_full && right_subtree_full)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

