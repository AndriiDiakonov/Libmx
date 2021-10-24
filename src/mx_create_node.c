#include "../inc/libmx.h"

t_list *mx_create_node(void *data) {
    t_list *NewNode = NULL;
    NewNode = (t_list *)malloc(sizeof(t_list));
    if (NewNode == NULL)
        return NULL;
    NewNode -> data = data;
    NewNode -> next = NULL;
    return NewNode;
}
