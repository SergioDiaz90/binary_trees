#include "binary_trees.h"
/**
 * binary_tree_inorder - function for print inorder tree of left, center, right.
 * @tree: pointer the root in tree.
 * @func: function for print value the node.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int cnt_l = 0, cnt_r = 0, lvl = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
	{
		cnt_l += 1;
		cnt_l += binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		cnt_r += 1;
		cnt_r += binary_tree_height(tree->right);
	}

	if (cnt_l > cnt_r)
		lvl = cnt_l;
	else
		lvl = cnt_r;
	return (lvl);
}
