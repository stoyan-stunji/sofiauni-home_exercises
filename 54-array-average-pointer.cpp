#include <iostream>
#include <cmath>

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

double averageSum(int array[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum / size;
}

int* pointerToClosestElement(int array[], int size, double averageSum)
{
    int* current = array;
    for (int i = 0; i < size; i++)
    {
        if (fabs(array[i] - averageSum) < fabs(*current - averageSum))
        {
            current = array + i;
        }
    }
    return current;
}

int main()
{
    int array[MAX_SIZE];
    int size = 0;

    cout << "size ";
    cin >> size;

    enterArray(array, size);
    double average = averageSum(array, size);
    //cout << average << endl;
    cout << pointerToClosestElement(array, size, average);
}
