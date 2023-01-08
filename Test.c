#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int node_values[] = {3, 7, 1, 0, -5, 9, 6, 3};
    tree_node *tree = NULL;

    for(i = 0; i <= 7; ++i)
        tree = insert_in_binary_search_tree(tree, node_values[i]);

    printf("%d", tree_height(tree));

    exit(EXIT_SUCCESS);
}