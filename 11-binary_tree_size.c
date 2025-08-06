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

	/* Étape 1 : Vérifie si le pointeur tree est NULL.
		👉 Comme toujours, on retourne 0 dans ce cas pour éviter les erreurs.
		📌 Tu as vu ça dans toutes les fonctions précédentes (is_leaf, depth, etc.) */

		if (tree == NULL)
		{
			return (0);
		}

	/* Étape 2 : Appelle la fonction de manière récursive sur les enfants gauche et droit.
		👉 Tu veux calculer combien de nœuds sont dans l’arbre de gauche et dans celui de droite.
		📚 C’est similaire à height(), sauf qu’au lieu de prendre le max, tu additionnes.
		🧠 Chaque appel retourne le nombre de nœuds dans le sous-arbre correspondant. */

		tree_right = binary_tree_size(tree->right);
		tree_left = binary_tree_size(tree->left);

	/* Étape 3 : Additionne le total gauche + total droit + 1 (pour le nœud actuel).
		👉 Cette logique a été utilisée dans la tâche “binary_tree_height” aussi, mais ici on **additionne tout** au lieu de chercher le max.
		📚 Voir “Recursion” dans les projets précédents (singly linked lists, recursion project si fait) */

		total = tree_right + tree_left + 1;

	/* Étape 4 : Retourne le total calculé */
	return (total);
}
