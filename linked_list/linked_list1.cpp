// First Linked List Practice
// Source code is from
// https://www.includehelp.com/code-snippets/linked-list-implementation-using-cpp-program.aspx
// Implementation is not correct

#include <iostream>

using namespace std;

struct Node
{
    int num;
    Node *next;
};

Node *head = NULL;

void insertNode(int n)
{
    Node *newNode = new Node;
    newNode->num = n;
    newNode->next = head;
    head = newNode;
}

void display()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->num << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteItem()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    cout << head->num << " is removed." << endl;
    head = head->next;
}

int main()
{
    display();
    insertNode(10);
    insertNode(20);
    insertNode(30);
    display();
}