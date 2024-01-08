#include <stdio.h>
#include <stdlib.h>

#include "binary_trees.h"

/**
 *
 *
 *
 *
 *
 *
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *bt = malloc(sizeof(*bt));

    if(bt == NULL)
    {
        return (NULL)
    }

bt->n = value;
bt->left = NULL;
bt->right = NULL;
bt->parent = NULL;


free (bt);
}