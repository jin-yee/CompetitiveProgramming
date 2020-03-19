//include library, linked list doesn't need any
#include <bits/stdc++.h>

using namespace std;

//create a node template
struct node
{
    //a node should have a key in order to let us
    //know what node to delete or edit
    int key;
    int data;
    node *ptrNext;
};

//create a linkedlist class
class LinkedList
{
    //to keep track the head is very important
    //since linked list are connected, once we can
    //access the head, we can access the whole list
private:
    node *head, *tail;

public:
    //use class constructor to set initial node as NULL,
    //i.e. no node
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    //this function return the reference of the head node
    node *getHead()
    {
        return head;
    }

    //this function return the reference of the tail node
    node *getTail()
    {
        return tail;
    }

    //this function concatenate two list into one
    //here we use a recursion approach
    static void concateList(node *lista, node *listb)
    {
        if (lista != NULL && listb != NULL)
        {
            if (lista->ptrNext == NULL)
            {
                lista->ptrNext = listb;
            }
            else
            {
                //this is where recursion occur
                concateList(lista->ptrNext, listb);
            }
        }
        else if (lista == NULL)
        {
            cout << "List a is NULL!";
        }
        else if (listb == NULL)
        {
            cout << "List b is NULL";
        }
        else
        {
            cout << "Both list are NULL";
        }
    }

    //this function tells if a list is empty
    void isEmpty()
    {
        if (head == NULL && tail == NULL)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }

    //this function search a node by key and
    //return the reference of that node
    node *searchNode(int key)
    {
        node *tmp = new node;
        tmp = head;
        for (; tmp; tmp = tmp->ptrNext)
        {
            if (tmp->key == key)
            {
                return tmp;
            }
        }
    }
    //this function put a new node at the front of the list
    //hence make it a head
    void putFront(int data)
    {
        //allocate a new space for new node
        node *tmp = new node;
        //store the data into this new node
        tmp->data = data;
        //make this new node point to the "old" head
        tmp->ptrNext = head;
        //update the head in this class, now the new head is simply tmp
        head = tmp;
    }

    //this function can insert a new node after a node
    void putAfter(node *a, int data)
    {
        //allocate a new space for new node
        node *tmp = new node;
        //store the data into this new node
        tmp->data = data;
        //make this new node point to the node after it
        tmp->ptrNext = a->ptrNext;
        //now to have two node, a and tmp point to the same node
        //we need to let a point to the new node
        a->ptrNext = tmp;
    }

    //this function can delete a node after "gg" node
    void deleteTheNodeAfter(node *gg)
    {
        //first, create a node and point it to "a" node that we wish to delete
        node *tmp = new node;
        tmp = gg->ptrNext;
        gg->ptrNext = tmp->ptrNext;
        delete tmp;
    }

    //this function can add a node to the list
    void appendNode(int data)
    {
        node *tmp = new node;
        //tmp is the new or last node, so it's always
        //point to NULL
        tmp->data = data;
        tmp->ptrNext = NULL;

        //if this is the first time we add a node, the node
        //is both head and tail, so we keep track
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

            //keep update of the tail
            tail = tmp;
        }
    }

    //this function simply print the whole list for debugging
    void printList()
    {
        node *tmp = head;
        //travesal of link list using loop, you can use recursive to do this
        for (; tmp; tmp = tmp->ptrNext)
        {
            cout << tmp->data << endl;
        }
    }
};

int main()
{
    //TODO write a Command line interface prompt user to do:
    //1. Check list
    //2. Print list
    //3. Add node to list
    //4. Delete node from list
    //5. Insert node to list (front, back or in between)
    //6. Concate list
    cout << "Testing" << endl;
}
