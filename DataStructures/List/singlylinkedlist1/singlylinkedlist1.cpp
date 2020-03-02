//include library, linked list doesn't need any
#include <bits/stdc++.h>

using namespace std;

//create a node template
struct node
{
    int data;
    node *ptrNext;
};

//create a linkedlist class
class linkedList
{
    //to keep track the head is very important
    //since linked list are connected, once we can
    //access the head, we can access the whole list
private:
    node *head, *tail;

public:
    //use class constructor to set initial node as NULL,
    //i.e. no node
    linkedList()
    {
        head = NULL;
        tail = NULL;
    }

    //this function can add a node to the list
    void addNode(int data)
    {
        node *tmp = new node;
        //tmp is the new or last node, so it's always
        //point to NULL
        tmp->data = data;
        tmp->ptrNext = NULL;
        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            //in this line, "tail" is the last node
            //so we let last node point to next node
            tail->ptrNext = tmp;
            tail = tmp;
        }
    }

    //this function simply print the whole list for debugging
    void printList()
    {
        node *tmp = head;
        for (; tmp; tmp = tmp->ptrNext)
        {
            cout << tmp->data << endl;
        }
    }
};

void checkaddNode(void)
{
    linkedList l1;
    for (int i = 0; i < 6; i++)
    {
        l1.addNode(i);
    }
    l1.printList();
}

int main()
{
    //check for addNode
    checkaddNode();
    return 0;
}