#include <iostream>

using namespace std;

const int MAXSIZE = 100;

bool isDecending(int array[], int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > array[i + 1])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void printArray(int array[], int size)
{
    if (isDecending(array, size))
    {
        cout << "\nThe array ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << "is sorted in a descending order.\n";
    }
    else
    {
        cout << "\nThe array ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << "is NOT sorted in a descending order.\n";
    }
}

int main()
{
    int array[MAXSIZE];
    int size = 0;

    cout << "Enter size of the array: \n";
    cin >> size;

    cout << "\nEnter elements of the array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    printArray(array, size);
}
