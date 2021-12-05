/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// A linked list:-

#include <stdio.h>
#include <stdlib.h>
struct list {
  int data;
  struct list *next;
};
typedef struct list node; 
void display(node *list){
    printf("\nElements of linked list is:\n");
    while (list != NULL){
        printf(" %d ", list->data);
        list = list->next;
  }
}
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
void at_last(node **head_ref, int new_data){
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
void mid_point(node **head_ref){
    node *rabbit = NULL; 
    node *tortoise = NULL; 
    rabbit = tortoise = *head_ref;
    while (rabbit != NULL && rabbit -> next != NULL){
        rabbit = rabbit -> next -> next;
        tortoise = tortoise -> next;
    }
    printf("\n\nThe mid point of the list is:- %d", tortoise -> data);
    return;
}
void count(node **head_ref){
    int count = 1;
    node *temp = *head_ref;
    while(temp -> next != NULL){
        temp = temp -> next;
        count++;
    }
    printf("\n\nThe total number of element in the link list are:- %d", count);
    return ;
}
int main(){
    node *head = NULL;
    insert_first(&head, 2);
    insert_first(&head, 1);
    at_last(&head, 4);
    at_last(&head, 5);
    insert_bet(&head, 3);
    display(head);
    count(&head);
    mid_point(&head);
   
    
    return 0;
}