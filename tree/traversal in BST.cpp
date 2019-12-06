#include<iostream>
using namespace std;

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int data) {
    BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BstNode* Insert(BstNode* root, int data) {
    if(root == NULL) {
        root = GetNewNode(data);
    }
    else if(data <= root->data) {
        root->left = Insert(root->left, data);
    }
    else {
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(BstNode* root, int data) {
    if(root == NULL) {
        return false;
    }
    if(root->data == data) {
        return true;
    }
    else if(data < root->data) {
        return Search(root->left, data);
    }
    else {
        return Search(root->right, data);
    }
}

int FindMinIterative(BstNode* root) {
    BstNode* current = root;
    if(current == NULL) {
        cout<<"Empty ring"<<endl;
        return -1;
    }
    while(current -> left != NULL) {
        current = current->left;
    }
    return current->data;
}

int FindMin(BstNode* root) {
    if(root == NULL) {
        cout<<"Empty ring"<<endl;
        return -1;
    }
    else if(root->left == NULL) {
        return root->data;
    }
    return FindMin(root->left);
}

int FindMaxIterative(BstNode* root) {
    BstNode* current = root;
    if(current == NULL) {
        cout<<"Empty ring"<<endl;
        return -1;
    }
    while(current->right != NULL) {
        current = current->right;
    }
    return current->data;
}

int FindMax(BstNode* root) {
    if(root == NULL) {
        cout<<"Empty ring"<<endl;
        return -1;
    }
    else if(root->right == NULL) {
        return root->data;
    }
    return FindMax(root->right);
}

void Preorder(BstNode* root) {
    if(root == NULL) return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(BstNode* root) {
    if(root == NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Postorder(BstNode* root) {
    if(root == NULL) return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    struct BstNode* root;
    root = NULL; //empty tree
    root = Insert(root, 15);
    root = Insert(root, 25);
    root = Insert(root, 35);
    root = Insert(root, 40);
    root = Insert(root, 5);
    root = Insert(root, 45);
    cout<<"Inorder: ";
    Inorder(root);
    cout<<"\n";
    cout<<"Preorder: ";
    Preorder(root);
    cout<<"\n";
    cout<<"Postorder: ";
    Postorder(root);
    cout<<"\n";
    cout<<"Max: "<<FindMax(root)<<endl; 
    cout<<"Min: "<<FindMin(root)<<endl; 
    cout<<"Search 1: "<<Search(root, 1)<<endl;
    cout<<"Search 5: "<<Search(root, 5)<<endl;
    return 0;
}
