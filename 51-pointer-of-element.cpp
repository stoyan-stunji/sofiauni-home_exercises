#include <iostream>

using namespace std;

const int MAX_SIZE = 50;

int *pointerElement(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return array + i;
        }
    }
    return nullptr;
}

int main()
{
    int array[MAX_SIZE];
    int size = 0;
    int element = 0;

    cout << "size ";
    cin >> size;

    cout << "element ";
    cin >> element;

    cout << "array ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << pointerElement(array, size, element);
}
