#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};
struct Node* start = NULL;
struct Node *create_ll(struct Node *start){
    struct Node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the data : ");
    scanf("%d", &num);
    while(num != -1){
        new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node -> data = num;
        if(start == NULL){
            new_node -> next = NULL;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr -> next != NULL)
                ptr = ptr -> next;
            ptr -> next = new_node;
            new_node -> next = NULL;
        }
        printf("\n Enter the data : ");
        scanf("%d", &num);
    }
    return start;
}

struct Node *display(struct Node *start){
    struct Node *ptr;
    ptr = start;
    while(ptr != NULL){
        printf("\t %d", ptr -> data);
        ptr = ptr -> next;
    }
    return start;
}

struct Node *add_beg(struct Node *start){
    struct Node *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node -> data = num;
    new_node -> next = start;
    start = new_node;
    return start;
}

