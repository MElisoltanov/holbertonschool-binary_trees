#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_right = 0;
	int height_left = 0;
	int balance;

	/* Étape 1 : On vérifie si tree est NULL. */

	if (tree == NULL)
	{
		return (0);
	}

	/* Étape 2 : On calcule la hauteur des sous-arbres gauche et droit. */

	height_right = binary_tree_height(tree->right);
	height_left = binary_tree_height(tree->left);

	/* Étape 3 : On corrige les cas où un des enfants n’existe pas */
		/* S’il n’y a PAS d’enfant gauche, on force sa "hauteur" à -1 */
		/* Idem pour le droit. */

	if (tree->left == NULL)
	{
		height_left = -1;
	}

	if (tree->right == NULL)
	{
		height_right = -1;
	}

	/* Étape 4 : On calcule le balance */

	balance = height_left - height_right;

	/* Étape 5 : On retourne le résultat */

	return (balance);
}
