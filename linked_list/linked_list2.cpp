#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;
// Node *tail = NULL;
Node *current = NULL;

void insertNode(int n)
{
    Node *newNode = new Node;

    if (head == NULL)
    {
        head = newNode;
        current = head;
    }
    else if (head != NULL)
    {
        current->next = newNode;
    }

    newNode->data = n;
    newNode->next = NULL;
    current = newNode;
}

void deleteItem()
{
    if (head == NULL)
    {
        cout << "List is already empty!" << endl;
    }

    if (head->next == NULL)
    {
        delete head;
    }

    Node *secondLast = head;
    while ((secondLast->next)->next != NULL)
    {
        secondLast = secondLast->next;
    }
    secondLast->next = NULL;
    current = secondLast;

    delete secondLast;
}

void display()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    display();
    insertNode(10);
    insertNode(20);
    display();
    deleteItem();
    display();
}