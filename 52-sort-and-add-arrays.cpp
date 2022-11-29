#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void enterArray(int array[], int size)
{
    cout << "array ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void sortArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
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

void addArrays(int array1[], int array2[], int array3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
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
    int array1[MAX_SIZE];
    int array2[MAX_SIZE];
    int array3[MAX_SIZE];
    int size = 0;

    cout << "size ";
    cin >> size;

    enterArray(array1, size);
    sortArray(array1, size);

    //printArray(array1, size);

    enterArray(array2, size);
    sortArray(array2, size);

    //printArray(array2, size);

    addArrays(array1, array2, array3, size);
    sortArray(array3, size);
    printArray(array3, size);
}
