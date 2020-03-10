#include "binary_trees.h"

/**
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t j, k;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	j = binary_tree_height(tree->right);
	k = binary_tree_height(tree->left);
	if (k > j)
		j = k;
	return (j + 1);
}
