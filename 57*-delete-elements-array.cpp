#include <iostream>

using namespace std;

const int MAX_SIZE = 50;

void enterArray(int array[], int size)
{
    cout << "array ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void deleteElement(int array[], int& size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            array[i] = INT_MAX;
            size--;
        }
    }
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

    enterArray(array, size);
    deleteElement(array, size, element);
    printArray(array, size);
}
