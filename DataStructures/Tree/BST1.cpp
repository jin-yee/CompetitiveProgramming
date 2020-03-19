//Let's use a pointer to implement a BST
//Some propertise of tree:
//l for level, n for number of node, h for height of tree
//1. Maximum number of node at a level l = 2^(l-1)
//2. Maximum number of node nmax of the tree of height h = 2^(h+1) - 1
//3. Given n nodes, the minimum possible height = floor(log(n+1)) - 1)
//4. Given a number of leaves L, the minimum # of level = log(L) + 1

#include <iostream>
#include <queue>

using namespace std;

struct Node{
	int key;
	Node *left;
	Node *right;
};

Node * createNode(int key){
	Node * node = new Node();
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	return node;
}

Node * search ( Node * root, int key)
{
	if(root == NULL)
		return NULL;
	
	//From top to bottom, left to right
	//will return the deepest, and right most
	queue< Node * > q;
	Node * out = NULL;
	q.push(root);
	
	while(!q.empty())
	{
		Node * temp = q.front();
		q.pop();
		
		if(temp->key == key) out = temp;
		if(temp->left != NULL) q.push(temp->left);
		if(temp->right != NULL) q.push(temp->right);
		
	}
	return out;
}

int main()
{
	//test createNode
	Node * root = createNode(1);
	root->left = createNode(2);
	root->left->left = createNode(4);
	root->right = createNode(3);
	root->right->left = createNode(5);
	cout << root->key << endl;
	
	/*        1
	//       / \
	//      2   3
	//     /   /
	//    4   5
	*/
	
	//test search node
	Node * node = search(root, 4);
	cout << node->key << endl;
	node = search(root, 2);
	cout << node->key << endl;
	return 0;
}
