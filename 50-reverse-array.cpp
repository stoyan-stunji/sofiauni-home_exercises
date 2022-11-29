#include <iostream>

using namespace std;

const int MAX_SIZE = 50;

void swap(int& num1, int& num2)
{
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}


void reverseArray(int array[], int size)
{
    for (int i = 0; i < size - i; i++)
    {
        swap(array[i], array[size - i - 1]);
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
    int array[MAX_SIZE];
    int size = 0;

    cout << "size ";
    cin >> size;

    cout << "array ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    reverseArray(array, size);
    printArray(array, size);

}
