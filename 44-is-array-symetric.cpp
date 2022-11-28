#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

bool isSym(int array[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        if (array[i] != array[(size - 1 - i)])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return false;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[MAX_SIZE];
    int size = 0;

    cout << "size ";
    cin >> size;

    cout << "elements ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    if (isSym(array, size))
    {
        cout << "The array ";
        printArray(array, size);
        cout << "is symetric.";
    }
    else
    {
        cout << "The array ";
        printArray(array, size);
        cout << "is NOT symetric.";
    }
}
