// This file is to test if-conditioner of pointer

#include <iostream>

using namespace std;

int main()
{
    int *test = NULL;

    if (!test)
    {
        cout << "Test is not assigned" << endl;
    }
}