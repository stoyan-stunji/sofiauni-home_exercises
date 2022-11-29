#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void sortArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size + 1; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

void deleteElement(int array[], int size, int element)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    array[i] = element;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
                array[i] = array[i + 1];
        }
        size--;
    }

   sortArray(array, size);
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << array[i] << " ";
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

    cout << "array ";
    deleteElement(array, size, element);
    printArray(array, size);
}
