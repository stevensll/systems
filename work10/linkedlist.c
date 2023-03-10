# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include "linkedlist.h"

void print_list (struct node * node){
    printf("[\n");
    while(node){
        printf("This is node %s with id %d\n", node->name, node->id);   
        node = node->next;
    }
    printf("]\n");
}

//makes a pointer referring to a node in heap memory
struct node * make_node (int id, char *name){
    struct node * n = malloc(sizeof(struct node));
    n->id = id;
    strncpy(n->name, name, strlen(name));
    n->next = 0;
    return n;
}

// makes the new node n in front of node F (inserting it behind f in order)
struct node * insert_front(struct node *f, int id, char * name){
    struct node* n = make_node(id, name);
    n->next = f;
    return n;
}

//frees everything from node n to the end, n should be null at the end of this function
struct node * free_list(struct node * n ){
    struct node *start = n;
    while(n){
        struct node *temp = n;
        n = n->next;
        free(temp);
    }
    return n;
}

struct node * remove_node (struct node *front, int data){
    //given empty list
    if(!front) return 0;
    struct node * start = front;
    // case where start node is the one to be removed
    if(front->id == data){
        start = front->next;
        free(front);
        return start;
    }
    //any other case where we must advance the list
    while(front->next){
        struct node * ahead = front->next;
        // printf("%d, ahead is %d\n", front->id, ahead->id);

        // any other cases
        if(ahead->id == data){
            printf("%d, expected %d\n", ahead->id, data);
            front->next = ahead->next;
            free(ahead);
            break; 
        }
        front = front->next;
    }
    return start;
}