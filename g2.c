#include <stdio.h>
#include <stdlib.h>
#include "gh.c" //to use

struct Node *add_any(struct Node *start)
{
    struct Node *new_node, *ptr;
    int num, pos = 1;
    printf("\n Enter the position to insert after : ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("\n Invalid position");
        return 0;
    }
    ptr = start;
    while (ptr != NULL && pos < num-1)
    {
        pos++;
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        printf("\n Node not found");
        return 0;
    }
    printf("\n Enter the data : ");
    new_node = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d", &(new_node->data));
    new_node->next = ptr->next;
    ptr->next = new_node;
    return start;
}

int main()
{
    start = create_ll(start);
    printf("\n LINKED LIST CREATED");
    start = display(start);
    start = add_any(start);
    start = display(start);
    return 0;
}