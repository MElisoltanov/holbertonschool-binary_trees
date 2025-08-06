#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size (number of nodes), or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_right;
	size_t tree_left;
	size_t total;

	/* Étape 1 : On vérifie si le pointeur tree est NULL. */

		if (tree == NULL)
		{
			return (0);
		}

	/* Étape 2 : On appelle la fonction de manière récursive sur les enfants gauche et droit. */

		tree_right = binary_tree_size(tree->right);
		tree_left = binary_tree_size(tree->left);

	/* Étape 3 : On additionne le total gauche + total droit + 1 (pour le nœud actuel). */

		total = tree_right + tree_left + 1;

	/* Étape 4 : On retourne le total calculé */
	return (total);
}
