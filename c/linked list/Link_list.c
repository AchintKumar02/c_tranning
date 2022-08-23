
#include <stdio.h>
#include <stdlib.h>
 
// A linked list node
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
  while (list != NULL){
     printf(" %d ", list->data);
     list = list->next;
  }
}
 
int main(){
    node *head = NULL;
    insert_first(&head, 1);
    at_last(&head, 2);
    insert_first(&head, 3);
    at_last(&head, 4);
    insert_first(&head, 6);
    insert_bet(&head, 5);
    printf("\nElement of linked list is:\f ");
    display(head);
    return 0;
}
