#include "binary_trees.h"
/**
 * binary_tree_inorder - function for print inorder tree of left, center, right.
 * @tree: pointer the root in tree.
 * @func: function for print value the node.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int cnt = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
	{
		cnt += 1;
		binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		cnt += 1;
		binary_tree_height(tree->left);
	}

	return (cnt);
}
