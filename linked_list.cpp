#include <iostream>

using namespace std;

template <typename T>
struct Node
{
    T value;
    struct Node<T> *next = nullptr;
};

template <typename T>
class SingleLinked_List
{
private:
    Node<T> *head;
}
