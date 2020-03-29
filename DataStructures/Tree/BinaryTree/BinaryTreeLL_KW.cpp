//Binary Tree Implementation using Linked List

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
	void insert(int key);
	Node * search(int key);
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

void Tree::insert(int key) {
	Node *tmp = new Node();
	tmp->key = key;
	if (root == NULL) {
		root = tmp;
		return;
	}
	deque <Node *> q;
	q.push_front(root);
	while (true) {
		Node *node = q.front();
		q.pop_front();
		if (node->leftNode == NULL){
			node->leftNode = tmp;
			break;			
		} else if (node->rightNode == NULL) {
			node->rightNode = tmp;
			break;
		} else {
			q.push_back(node->leftNode);
			q.push_back(node->rightNode);
		}
	}
}


Node * Tree::search(int key) {
	if (root == NULL) {
		cout << "[Error] Tree is not initialised" <<endl;
		return NULL;
	}

	deque <Node *> q;
	q.push_front(root);

	while(!q.empty()) {
		Node *node = q.front();
		q.pop_front();
		if(node->key == key){
			cout << "[SUCCESS] the value specified is found in tree " <<endl;
			return node;
		}
		if (node->leftNode != NULL) q.push_back(node->leftNode);
		if (node->rightNode != NULL) q.push_back(node->rightNode);
	}
	cout << "[ERROR]Unable to find the specified value in tree" <<endl;
	return NULL;
}


int main () {
	Tree tree;
	//check blank tree traverse, should return nothing or error
	tree.postorderTraversal(tree.getRoot());
	tree.levelorderTraversal();

	// Create a tree that looks like this
	//            1
	//          /   \
	//         /     \
	//        2       3
	//       / \     / \
	//      4   5   6   7
	//     /
	//    8

	for(int i = 1 ;i<9; i++) {
		tree.insert(i);
	}
	cout << "post order: " << endl;
	tree.postorderTraversal(tree.getRoot());
	cout << endl << "in order: " << endl;
	tree.inorderTraversal(tree.getRoot());
	cout << endl << "pre order: " << endl;
	tree.preorderTraversal(tree.getRoot());
	cout << endl << "level order: " << endl;
	tree.levelorderTraversal();

	cout << endl << "searching for value : 2" <<endl;
	tree.search(2);

	cout<< "searching for value: 20" <<endl;
	tree.search(20);

	return 0;


}