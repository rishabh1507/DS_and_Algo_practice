#include<bits/stdc++.h>

using namespace std;

//  structure for new BST node

struct bstnode {
	int data;
	bstnode* left;
	bstnode* right;
};

// Function to create new node in heap

bstnode* getnode(int data) {
	bstnode* child = new bstnode();
	child -> data = data;
	child -> left = child -> right = NULL;
	
	return child;		
}

// To insert data in BST, returns address of root node 

bstnode* insert(bstnode* root,int data) {
	
	// when tree is empty
	
	if(root == NULL) {
		root = getnode(data);
	}
	
	// if data to be inserted is lesser, insert in left subtree. 
	
	else if(data <= root -> data) {
		root -> left = insert(root -> left,data);		
	}
	
	// if data to be inserted is greater, insert in right subtree. 
	
	else {
		root -> right = insert(root -> right,data);
	}
	
	return root;
}

// Function to traverse a tree using DFS (preorder) approach
// child left right

void preorder(bstnode* root) {
	
	if (root == NULL) {
		return;
	}
	cout<<root -> data<<" ";
	preorder(root -> left);
	preorder(root -> right);
}

// Function to traverse a tree using DFS (postorder) approach
// left right child

void postorder(bstnode* root) {
	
	if (root == NULL) {
		return;
	}
	postorder(root -> left);
	postorder(root -> right);
	cout<<root -> data<<" ";
	
}

// Function to traverse a tree using DFS (inorder) approach
//left child right

void inorder(bstnode* root) {
	
	if (root == NULL) {
		return;
	}
	
	inorder(root -> left);
	cout<<root -> data<<" ";
	inorder(root -> right);
	
}

int main() {
	
	//For faster input and output
	ios_base :: sync_with_stdio (false);
	cin.tie(NULL);
	
	//creating an empty tree	
	bstnode* root = NULL;                 
	
	root = insert(root,20);
	root = insert(root,15);
	root = insert(root,25);
	root = insert(root,23);
	root = insert(root,28);
	root = insert(root,21);
	root = insert(root,24);
	root = insert(root,26);
	root = insert(root,30);
	root = insert(root,10);
	root = insert(root,18);
	root = insert(root,4);
	root = insert(root,8);
	root = insert(root,16);
	root = insert(root,19);
	
	cout<<"\nThe preorder traversal of the tree is :- "<<endl;
	preorder(root);
	cout<<"\nThe postorder traversal of the tree is :- "<<endl;
	postorder(root);
	cout<<"\nThe inorder traversal of the tree is :- "<<endl;
	inorder(root);
	
}
