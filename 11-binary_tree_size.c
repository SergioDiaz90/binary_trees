#include "binary_trees.h"
/**
 * binary_tree_inorder - function for print inorder tree of left, center, right.
 * @tree: pointer the root in tree.
 * @func: function for print value the node.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cnt = 0;
	if (!tree)
		return (0);
	else
	{
		cnt += 1;
		cnt += binary_tree_size(tree->left);
		cnt += binary_tree_size(tree->right);
	}

	return (cnt);
}
