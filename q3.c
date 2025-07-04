#include <stdio.h>
#include <stdlib.h>

// Define the structure of a BST node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new node in the BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

// Function for inorder traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Main function
int main() {
    int elements[] = {40, 20, 60, 10, 30, 50, 70};
    int n = sizeof(elements) / sizeof(elements[0]);
    struct Node* root = NULL;

    // Insert elements into BST
    for (int i = 0; i < n; i++) {
        root = insert(root, elements[i]);
    }

    // Print inorder traversal
    printf("Inorder Traversal of the BST:\n");
    inorder(root);
    printf("\n");

    return 0;
}
