#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth;

	/* Étape 1 : On vérifie si le nœud est NULL */

	if (tree == NULL)
	{
		return (0);
	}

	/* Étape 2 : On vérifie si le nœud n’a pas de parent */

	if (tree->parent == NULL)
	{
		return (0);
	}

	/* Étape 3 : Sinon, on appelle la fonction récursivement sur le parent  */

	tree_depth = binary_tree_depth(tree->parent);

	/* Étape 4 : On retourne la profondeur calculée */

	return (tree_depth + 1);
}
