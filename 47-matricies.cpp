#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void enterMatrix(int array[][MAX_SIZE], int rows, int columns)
{
    cout << "matrix ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> array[i][j];
        }
    }
}

void enterTranspose(int array[][MAX_SIZE], int size)
{
    cout << "matrix ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> array[i][j];
        }
    }
}

void printMatrix(int array[][MAX_SIZE], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << " " << endl;
    }
}

void multiplyMatrix(int array[][MAX_SIZE], int rows, int columns)
{
    int multiplier = 0;
    cout << "multiplier ";
    cin >> multiplier;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            array[i][j] *= multiplier;
        }
    }
}

void swap(int& num1, int& num2)
{
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void transpose(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void printTranspose(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void add(int array1[][MAX_SIZE], int array2[][MAX_SIZE], int array3[][MAX_SIZE], int size)
{
    cout << "matrix  ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> array1[i][j];
        }
    }
    cout << "matrix  ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> array2[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }

    printTranspose(array3, size);
}


int main()
{
    int array[MAX_SIZE][MAX_SIZE];
    int array1[MAX_SIZE][MAX_SIZE];
    int array2[MAX_SIZE][MAX_SIZE];
    int rows = 0;
    int columns = 0;
    int size = 0;

    cout << "rows ";
    cin >> rows;
    cout << "columns ";
    cin >> columns;

    enterMatrix(array, rows, columns);
    multiplyMatrix(array, rows, columns);
    printMatrix(array, rows, columns);

    cout << "size ";
    cin >> size;

    enterTranspose(array, size);
    transpose(array, size);
    printTranspose(array, size);

    add(array, array1, array2, size);
}
