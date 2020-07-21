#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: pointer the root in tree.
 * Return: 1 if tree is full or O if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int cnt = 0;

	if (!tree)
		return (0);

	if ((tree->left != NULL) && (tree->right != NULL) && tree->parent != NULL)
		cnt = 1;
	else
		cnt = 0;

	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	return (cnt);
}
