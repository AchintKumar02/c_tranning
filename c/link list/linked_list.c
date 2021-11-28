/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct list{                        //decl struct
    int data;
    struct list *link;
};
typedef struct list node;               //changeing name
void insert(node **, int );             //dec proto
void display(node *);
    
int main(){                             //main fun
    node *head = NULL;
    insert(&head, 50);                  // call func
    insert(&head, 40);
    display(head);
    return 0;
}
void insert(node **head_ref, int num){                      // defining fun
    node *p = (node *)malloc(sizeof(node));                 // creating new node 
    p->data = num;                                          //filling data in linked list 
    p->link = NULL;
    
    if (*head_ref == NULL){                             // condition assining 1st node address to pointer head
        *head_ref = p;
    }else {
        node *temt = *head_ref;                     // creating new pointer to store 1st node address 
    while(temt->link != NULL){                      // traverse in linked list to add new node to teh last
        temt = temt -> link;
    }
    temt -> link = p;
    }
}
void display(node * list){                          // displaing the data of linked list
    while (list != NULL){
        printf("%d  ", list->data);
        list = list -> link;
    }
}