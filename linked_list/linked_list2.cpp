#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;
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

void deleteItem(int n)
{
    if (head == NULL)
    {
        cout << "List is already empty!" << endl;
    }

    Node *target = head;

    if (target == head && target->data == n)
    {
        head = head->next;
        delete target;
    }

    target = head->next;
    Node *secondLast = head;

    while (target != NULL)
    {
        if (target->data == n)
        {
            secondLast->next = target->next;
            delete target;
        }
        target = target->next;
        secondLast = secondLast->next;
    }
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
    insertNode(30);
    display();
    deleteItem(20);
    display();
    deleteItem(30);
    display();
}