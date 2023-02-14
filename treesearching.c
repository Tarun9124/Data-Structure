#include<stdio.h>
#include<stdlib.h>
struct node{
   int key;
   struct node *left, *right;
};
struct node *newNode(int item){
   struct node *temp = (struct node *)malloc(sizeof(struct node));
   temp->key = item;
   temp->left = temp->right = NULL;
   return temp;
}
void traversetree(struct node *root){
   if (root != NULL){
      traversetree(root->left);
      printf("%d \t", root->key);
      traversetree(root->right);
   }
}
struct node* search(struct node* root, int key){
   if (root == NULL || root->key == key)
      return root;
   if (root->key < key)
      return search(root->right, key);
   return search(root->left, key);
}
struct node* insert(struct node* node, int key){
   if (node == NULL) return newNode(key);
      if (key < node->key)
         node->left = insert(node->left, key);
      else if (key > node->key)
         node->right = insert(node->right, key);
   return node;
}
int main(){
   struct node *root = NULL;
   root = insert(root, 45);
   insert(root, 9);
   insert(root, 12);
   insert(root, 20);
   insert(root, 4);
   insert(root, 21);
   insert(root, 11);
   printf("Name:Prajapati Tarun Jayantibhai");
   printf("\nEnrollment No.:206120316008\n");
   printf("\nThe tree is :\n");
   traversetree(root);
   printf("\nSearching for 14 in this tree ");
   if(search(root , 14))
      printf("\nElement found");
   else
      printf("\nElement not found");
   return 0;
}
