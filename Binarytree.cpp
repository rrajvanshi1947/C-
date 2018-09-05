#include <iostream>
#include <string>

using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};

node* getNewNode(int x){
	node* temp = new node();
	temp->data = x;
	temp->left = 0;
	temp->right = 0;
	return temp;
}

node* insert(node* root, int x){
	if(root == 0)
	root = getNewNode(x);

	else if(x <= root->data){
	root->left = insert(root->left, x);
	}
	
	else{
	root->right = insert(root->right, x);
	}
	return root;	
}

bool search(node* root, int x){
	if(root == 0)
	return false;

	else if(root->data == x)
	return true;

	else if(x <= root->data)
	return search(root->left, x);

	else
	return search(root->right, x);
}

int findMin(node* root){
	if(root == 0){
	cout << "Tree is empty" << endl;
	return -1;
	}
	
	while(root->left != 0)	// else if(root->left == 0) return root>data; return findMin(root->left);
	root = root->left;
	return root->data;
	
}

int findMax(node* root){
	if(root == 0){
	cout << "Tree is empty" << endl;
	return -1;
	}
	
	while(root->right != 0)	// else if(root->right == 0) return root>data; return findMin(root->right);
	root = root->right;
	return root->data;
	
}

int height = 0;

int findHeight(node* root){
	int leftHeight = rightHeight = 0;
	if(root == 0)
	cout << "Tree is empty" << endl;

	else if(root->left == root->right == 0)
	return 0;
	
	else{
	height++;
	findHeight(root->left);
	findHeight(root->right);
	
	
	}
}

int main(){
	node* root = 0;
	root = insert(root, 1);
	root = insert(root, 2);
	root = insert(root, 0);
	root = insert(root, 3);
	root = insert(root, -1);

	cout << search(root, 0) << endl;

	cout << findMin(root) << endl;
	
	cout << findMax(root) << endl;

	return 0;
}
