#include<iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node* next;
    Node() {}
    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
        next = NULL;
    }
    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

Node* connect(Node* root) {
    if(root==NULL || root->left==NULL || root->right==NULL) return root;
    root->left->next=root->right;
    if(root->next !=NULL){
        root->right->next=root->next->left;
    }
    connect(root->left);
    connect(root->right);
    return root;
}

int main(){
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    Node* root1= connect(root);
    cout<<root1->val<<endl;
    cout<<root1->left->val<<endl;
    cout<<root1->right->val<<endl;
    cout<<root1->left->left->val<<endl;
    cout<<root1->left->right->val<<endl;
    cout<<root1->right->left->val<<endl;
    cout<<root1->right->right->val<<endl;
    cout<<root1->left->left->next->val<<endl;
    cout<<root1->left->right->next->val<<endl;
    cout<<root1->right->left->next->val<<endl;
    cout<<root1->right->right->next<<endl;
}