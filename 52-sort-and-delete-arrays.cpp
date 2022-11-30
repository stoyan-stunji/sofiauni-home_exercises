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

void swap(int& num1, int& num2) 
{
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void sortArray(int array[], int size)
{

    for (int i = 0; i < size - 1; i++) {

        for (int j = 0; j < size - 1 - i; j++) 
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void deleteAndSort(int array[], int element, int& size)
{

    for (int i = 0; i < size; i++) 
    {
        if (array[i] == element)
        {
            array[i] = INT_MAX;
            break;
        }
    }

    sortArray(array, size--);

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
    int array[50];
    int size = 0;
    int element = 0;

    cout << "size ";
    cin >> size;

    cout << "element ";
    cin >> element;

    enterArray(array, size);
    deleteAndSort(array, element, size);
    printArray(array, size);

    return 0;
}
