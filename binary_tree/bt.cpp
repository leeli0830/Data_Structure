#include <iostream>

using namespace std;

struct Btree
{
    Btree *lchild;
    Btree *rchild;
    int data;
};

Btree *head = NULL;
// Btree *current = NULL;

void insertNode(int num)
{
    Btree *newBtree = new Btree;

    if (head == NULL)
    {
        newBtree->data = num;
        head = newBtree;
        // current = newBtree;
    }
    else if (head != NULL)
    {
        }
}

int main()
{
    // Put test codes here
}