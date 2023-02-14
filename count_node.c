#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
};
void push_back(struct Node** head_ref, int newElement) {
  struct Node *newNode, *temp;
  newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = newElement;
  newNode->next = NULL;
  newNode->prev = NULL;
  if(*head_ref == NULL) {
    *head_ref = newNode;
  } else {
    temp = *head_ref;
    while(temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
}
int countNodes(struct Node* head_ref) {
  struct Node* temp = head_ref;
  int i = 0;
  while (temp != NULL) {
    i++;
    temp = temp->next;
  }
  return i;
}
void PrintList(struct Node* head_ref) {
  struct Node* temp = head_ref;
  if(head_ref != NULL) {
    printf("\nThe list contains: ");
    while (temp != NULL) {
      printf("%i ",temp->data);
      temp = temp->next;
    }
    printf("\n");
  } else {
    printf("The list is empty.\n");
  }
}
int main() {
  struct Node* MyList = NULL;
   printf("Name:Prajapati Tarun Jayantibhai");
   printf("\nEnrollment No.:206120316008\n");

  push_back(&MyList, 10);
  push_back(&MyList, 20);
  push_back(&MyList, 30);
  push_back(&MyList, 40);
  PrintList(MyList);

  printf("No. of nodes: %i\n",countNodes(MyList));
  return 0;
}
