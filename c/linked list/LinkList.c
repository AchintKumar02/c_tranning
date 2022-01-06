/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


struct list {
    int digit;
    struct list *next;
};

typedef struct list node;

void insert(node **, int);
void display(node *);

int main(){
    
    node *head = NULL;
    
    insert(&head, 100);
    insert(&head, 200);
    display(head);
}


void insert(node **head_ref, int num){
    
    node *p =  (node *) malloc(sizeof(node));
    p->digit = num;
    p->next = NULL;
        
    /* When linked list is empty*/
    /* Insert at the beginning*/
    if (*head_ref == NULL ){
        *head_ref = p;
    } else {
         /* traverse to the last element of linked list then insert element */
        node *temp = *head_ref;
        
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next  = p;
    }
}


void display(node *list){
   
    while(list != NULL) {
        printf("%d ", list->digit);
        list = list -> next;
    }
}


