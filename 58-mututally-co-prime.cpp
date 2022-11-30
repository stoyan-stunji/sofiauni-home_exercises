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

int* mutuallyOddElements(int array[], int size)
{
    int i = 0;
    for (i = 2; i < size; i++)
    {
        if (array[i] % size == 0 && array[i + 1] % size == 0)
        {
            return nullptr;;
        }
    }
    return array + i;
} 

int main()
{
    int array[MAX_SIZE];
    int size = 0;

    cout << "size ";
    cin >> size;

    enterArray(array, size);
    cout << mutuallyOddElements(array, size);
}
