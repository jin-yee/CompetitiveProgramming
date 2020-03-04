#include <iostream>

using namespace std;

struct node
{
    int key;
    int data;
    node *ptrPrev;
    node *ptrNext;
};

class DoubleLinkedList
{
private:
    node *head, *tail;

public:
    DoubleLinkedList()
    {
        head == NULL;
        tail == NULL;
    }

    //get head node
    node *getHead()
    {
        return head;
    }

    //get tail node
    node *getTail()
    {
        return tail;
    }

    //append
    void append(int data)
    {
        node *tmp = new node;
        tmp->data = data;
        tmp->ptrPrev = NULL;
        //check if this is the first node
        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
            head->ptrPrev = NULL;
            head->ptrNext = NULL;
        }
        //not the first node
        else
        {
            tail->ptrNext = tmp;
            tmp->ptrPrev = tail;
            tail = tmp;
        }
    }

    //search node by key

    //push
    //insertAfter
    //insertBefore
    //deletion
    //print list
    //concate two lists
};

int main()
{

    return 0;
}