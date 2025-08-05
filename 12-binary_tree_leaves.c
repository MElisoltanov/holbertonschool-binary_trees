#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts
 * the leaves in a binary tree.
 *
 * @tree: tree is a pointer to the root node
 * of the tree to count the number of leaves.
 *
 * Return: tree is NULL, the function must return 0.
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves, sum;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	sum = left_leaves + right_leaves;

	return (sum);
}
