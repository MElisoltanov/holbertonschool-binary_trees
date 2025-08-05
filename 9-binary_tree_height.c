#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height;
	size_t left_height;

	/* Étape 1 : Vérifie si le pointeur tree est NULL. */

	if (tree == NULL)
	{
		return (0);
	}

	/* Étape 2 : Si le nœud n’a pas d’enfant, la hauteur est 0. */

	if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}

	/* Étape 3 : Calcule récursivement la hauteur de gauche et de droite. */

	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);

	/* Étape 4 : Retourne le maximum des deux hauteurs + 1 */

	if (left_height < right_height)
	{
		return (right_height + 1);
	}

	else
	{
		return (left_height + 1);
	}
}
