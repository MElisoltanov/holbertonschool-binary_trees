#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
 * @tree: Pointeur vers la racine de l’arbre
 *
 * Return: 1 si l’arbre est parfait, sinon 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_right, tree_left;
	int height_right, height_left;

	/* Étape 1 : Si tree est NULL, retourne 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Étape 2 : Si c’est une feuille, retourne 1 */
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	/* Étape 3 : Si un seul des enfants est NULL, retourne 0 */
	if (tree->right == NULL || tree->left == NULL)
	{
		return (0);
	}

	/* Étape 4 : Vérifie récursivement si les deux sous-arbres sont parfaits */
	tree_right = binary_tree_is_perfect(tree->right);
	tree_left = binary_tree_is_perfect(tree->left);

	if (tree_right == 0 || tree_left == 0)
	{
		return (0);
	}

	/* Étape 5 : Vérifie que les hauteurs des deux sous-arbres sont égales */
	height_right = binary_tree_height(tree->right);
	height_left = binary_tree_height(tree->left);

	if (height_right != height_left)
	{
		return (0);
	}

	return (1);
}
