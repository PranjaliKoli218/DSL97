#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* create() {
    int x;
    cout << "Enter data (-1 for no node): ";
    cin >> x;

    if(x == -1)
        return NULL;

    Node* temp = new Node();
    temp->data = x;

    cout << "Left child of " << x << endl;
    temp->left = create();

    cout << "Right child of " << x << endl;
    temp->right = create();

    return temp;
}

void preorder(Node* root) {
    if(root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node* root) {
    if(root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node* root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root;

    cout << "Create Binary Tree\n";
    root = create();

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    return 0;
}
