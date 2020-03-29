//Binary Search Tree Implementation using Linked List

//Binary Search Tree is a type of binary tree where left subtree is lesser or equal to root,
// while right subtree is larger than root

#include <iostream>
#include <deque>

using namespace std;

struct Node {
	int key;
	Node *leftNode, *rightNode;
};

class Tree {
private:
	Node *root;

public:
	Tree(){root = NULL;}
	void preorderTraversal(Node *node);
	void inorderTraversal(Node *node);
	void postorderTraversal(Node *node);
	void levelorderTraversal();
	//Helper method so we only need to call func and provide only key argument in main
	void insert (int key) {root = insert(root, key);}
	void deleteNode(int key) {root = deleteNode(root, key);}
	Node* insert(Node *node, int key);
	Node* deleteNode(Node *node, int key);
	Node * getDeepestLeftNode(Node *node);
	Node * search(Node *node, int key);
	Node * getRoot() {return root;}
};


void Tree::preorderTraversal(Node *node){
	if (node == NULL)
		return;
	cout << node->key << ", ";
	preorderTraversal(node->leftNode);
	preorderTraversal(node->rightNode);
}

void Tree::inorderTraversal(Node *node) {
	if (node == NULL)
		return;
	inorderTraversal(node->leftNode);
	cout << node->key << ", ";
	inorderTraversal(node->rightNode);
}

void Tree::postorderTraversal(Node *node) {
	if (node == NULL)
		return;
	postorderTraversal(node->leftNode);
	postorderTraversal(node->rightNode); 
	cout << node->key << ", ";
}

void Tree::levelorderTraversal() {
	if(root == NULL){
		cout << "ERROR , ROOT IS NULL" <<endl;
		return;
	}
	deque <Node *> q;
	q.push_front(root);
	while(!q.empty()) {
		Node *node = q.front();
		q.pop_front();
		if (node->leftNode != NULL) q.push_back(node->leftNode);
		if (node->rightNode != NULL) q.push_back(node->rightNode);
		cout << node->key << ", ";
	}
}

Node* Tree::insert(Node* node, int key) {
	if (node == NULL){
		Node *tmp = new Node();
		tmp->key = key;
		return tmp;
	} else if (key <= node->key) { 
		node->leftNode = insert(node->leftNode, key);
		return node;
	}
	else {
		node->rightNode = insert(node->rightNode, key);
		return node;
	}
}

Node* Tree::deleteNode(Node *node, int key) {
	//If node is null , it means, no particular key in tree, do ntg;
	if (node == NULL) 
		cout << "Deletion error, given key is not found in tree"<< endl;
	else if (key > node->key) 
		node->rightNode = deleteNode(node->rightNode, key);
	else if ( key < node->key)
		node->leftNode = deleteNode(node->leftNode, key);
	else if(key == node->key) {	
	// First case, node is leaf node, can safely delete it
		if (node->leftNode == NULL && node->rightNode == NULL)
			node = NULL;
	// second case; node is having one child, delete current node and link the parent to children
		else if(node->leftNode == NULL)
			node = node->rightNode;
		else if (node->rightNode == NULL)
			node = node->leftNode;
	// third case, node has two child, replace the key of node that we wish to delete with .. 
	// ..the smalllest key on its right sub tree, and delete the respective node with smallest key
		else{
			Node *tmp = getDeepestLeftNode(node->rightNode);
			node->key = tmp->key;
			node->rightNode = deleteNode(node->rightNode,tmp->key);
		}
	}
	return node;
}

Node * Tree::getDeepestLeftNode(Node *node) {
	if (node->leftNode == NULL) return node;
	else getDeepestLeftNode(node->leftNode);
}


Node * Tree::search(Node *node, int key) {
	if (node == NULL) {
		cout << "value not found" <<endl;
		return NULL;
	} else if (key == node->key) {
		cout << "[SUCCESS] the value specified is found in tree " <<endl;
		return node;
	} 
	else if (key > node->key)
		search(node->rightNode, key);
	else
		search(node->leftNode, key);
}



int main () {
	// 1. Create blank Tree
	Tree tree;
	// 2. Check blank tree traverse, should return nothing or error
	tree.postorderTraversal(tree.getRoot());
	tree.levelorderTraversal();
	/* 3. Insert value to tree a tree that looks like this
	           100
	          /   \
	         /     \
	        90     150
	       /      / 
	      70        
	     /  \
	    50   80
	*/
	tree.insert(100);
	tree.insert(90);
	tree.insert(70);
	tree.insert(80);
	tree.insert(50);
	tree.insert(150);

	// 4. Traverse Check
	Node *root = tree.getRoot();
	// Post, Pre and Inorder are depth first search
	// Post order Traversal, traverse method from left to right to root 
	cout << "post order: " << endl;
	tree.postorderTraversal(root);
	// In order Traversal, left to root to right
	cout << endl << "in order: " << endl;
	tree.inorderTraversal(root);
	cout << endl << "pre order: " << endl;
	// Preorder Traversal, root to left to right, 
	tree.preorderTraversal(root);
	cout << endl << "level order: " << endl;
	// Level order is Breadth First Search, search layer by layer
	tree.levelorderTraversal();

	// 5. Search a particular value in Tree 
	cout << endl << "searching for value : 2" <<endl;
	tree.search(tree.getRoot(),2);
	cout<< "searching for value: 20" <<endl;
	tree.search(root,90);

	// 6. Delete a particular value in tree
	tree.deleteNode(root,70);
	tree.preorderTraversal(tree.getRoot());
	tree.deleteNode(root,90);
	cout <<endl;
	tree.preorderTraversal(tree.getRoot());
	return 0;

}
