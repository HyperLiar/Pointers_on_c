#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>
typedef struct NODE {
    struct NODE* next;
    char val;
} Node;

Node *search_list( Node *node, void const *value,
    int (*compare) ( void const *, void const *)) {
    while (node != NULL) {
        if (compare(&node->val, value) == 0)
            break;
        node = node->next;
    }

    return node;
}

int compare_int( void const *a, void const *b) {
    if (*(int*) a == *(int*)b)
        return 0;
    else
        return 1;
}

int compare_char( void const *a, void const *b) {
    if (*(char*)a == *(char*)b)
        return 0;
    else
        return 1;
}

int main() {
    Node *root;
    root = (Node *) malloc(sizeof(Node));
    char i = 'a';
    root->val = 'b';
    root->next = (Node *) malloc(sizeof(Node));
    root->next->val = 'a';

    printf("%lx\n", sizeof(Node));
    printf("%p\t%d\n", root, root->val);
    Node *p = search_list(root, &i, compare_char);

    printf("%p\t%d\n", p, p->val);

    size_t align_node = offsetof(Node, next);
    size_t align_val = offsetof(Node, val);

    printf("%lx\t%lx\n", align_node, align_val);

    free(root->next);
    free(root);
    return 1;
}
