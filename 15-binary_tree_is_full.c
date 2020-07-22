#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: pointer the root in tree.
 * Return: 1 if tree is full or O if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if ((!tree->left) && (!tree->right))
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	else
		return (0);
}
