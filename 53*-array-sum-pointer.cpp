#include <iostream>

using namespace std;

// Напишете функция, която приема два масива и един указател, 
// който пренасочете да сочи масива, чиято сума на елементите е минимална.

const int MAX_SIZE = 50;

void enterArray(int array[], int size)
{
    cout << "array ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int sumArray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

int* pointerOfBiggerSum(int array1[], int array2[], int size)
{
        if (sumArray(array1, size) > sumArray(array2, size))
        {
            return 0; //??
        }
        else if (sumArray(array1, size) < sumArray(array2, size))
        {
            return 0; //??
        }
    return nullptr;
}

int main()
{
    int array1[MAX_SIZE];
    int array2[MAX_SIZE];
    int size = 0;

    cout << "size ";
    cin >> size;

    enterArray(array1, size);
    enterArray(array2, size);
    sumArray(array1, size);
    sumArray(array2, size);
    pointerOfBiggerSum(array1, array2, size);
}
