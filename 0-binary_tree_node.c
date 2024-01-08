#include <stdio.h>
#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 * @parent : pointer to the parent of the node create
 * @value : Value input a new node
 *
 *
 * Return : Error = NULL / pointer to a new node
 *
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *bt = malloc(sizeof(*bt));

    if(bt == NULL)
    {
        return (NULL);
    }

bt->n = value;
bt->left = NULL;
bt->right = NULL;
bt->parent = parent;


free (bt);

return(bt);
}