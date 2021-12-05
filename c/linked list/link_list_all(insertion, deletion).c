/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// A linked list:- (deletion -> from front , from between , from last);

#include <stdio.h>
#include <stdlib.h>
struct list {
  int data;
  struct list *next;
};
typedef struct list node; 

void insert_first(node **head_ref, int new_data){
    node* new_node = (node*) malloc(sizeof(node));
    new_node->data  = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void insert_bet(node **head_ref, int new_data){
    int count;
    if (head_ref== NULL){
      printf("the given head cannot be NULL");
      return;
    }else{
        node *temt = *head_ref;
        node* new_node =(node*) malloc(sizeof(node));
        new_node->data  = new_data;
        new_node->next = NULL;
        printf("Enter the position\n");
        scanf("%d", &count);
        for (int i = 1; i < count - 1; i++){
            temt = temt -> next;
        }
        new_node -> next = temt -> next;
        temt -> next = new_node;
    }
    return;
}
void at_last(node** head_ref, int new_data){
    node* new_node = (node*) malloc(sizeof(node));
    node *last = *head_ref; 
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL){
       *head_ref = new_node;
       return;
    }
 
    while (last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}
 
void display(node *list){
    printf("\nElements of linked list is:\n");
    while (list != NULL){
        printf(" %d ", list->data);
        list = list->next;
  }
}
void delete_front(node **head_ref){
    node *temp = *head_ref;
    node *p = *head_ref;
    temp  = temp -> next;
    *head_ref = temp;
    free(p);
    printf("\n\n\nThe list after deleting front element :-");
    return;
}
void delete_bet(node **head_ref){
    int del, count = 1;
    node *temp = *head_ref;
    node *prev = NULL;
    printf("\n\n\nEnter the position form where you want to delete the element\n");
    scanf("%d",&del);
    while(count++ != del){
            prev = temp;
            temp = temp -> next;
    }
    prev -> next = temp -> next;
    free(temp);
    printf("\nThe list after deleting  element from %d place :-", del);
    return;
}
void delete_last(node **head_ref){
    node *temt = *head_ref;
    node *prev_node;
    while (temt -> next != NULL){
        prev_node = temt;
        temt = temt -> next;
    }
    prev_node -> next = NULL;
    free(temt);
    printf("\n\n\nThe list after deleting last element :-");
    return;
}
 
int main(){
    node *head = NULL;
    insert_first(&head, 3);
    at_last(&head, 4);
    insert_first(&head, 2);
    at_last(&head, 6);
    insert_first(&head, 1);
    insert_bet(&head, 5);
    
    display(head);
    
    delete_front(&head);
    display(head);
    delete_bet(&head);
    display(head);
    delete_last(&head);
    display(head);
    return 0;
}