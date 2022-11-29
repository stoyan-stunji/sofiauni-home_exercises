#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void enterMatrix(int matrix[][MAX_SIZE], int rows, int columns)
{
    cout << "matrix ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void zigzag(int matrix[][MAX_SIZE], int result[], int rows, int columns)
{
    result[rows * columns];
    result[0] = matrix[0][0];
    int i = 0, j = 0, check = 1;
    while (check < rows * columns)
    {
        while (i >= 1 && j < columns - 1) 
        {
            i--;
            j++;
            result[check++] = matrix[i][j];
        }
        if (j < columns - 1) 
        {
            j++;
            result[check++] = matrix[i][j];
        }
        else if (i < rows - 1) 
        {
            i++;
            result[check++] = matrix[i][j];
        }
        while (i < rows - 1 && j >= 1) 
        {
            i++;
            j--;
            result[check++] = matrix[i][j];
        }
        if (i < rows - 1) 
        {
            i++;
            result[check++] = matrix[i][j];
        }
        else if (j < columns - 1) 
        {
            j++;
            result[check++] = matrix[i][j];
        }
    }
}

void printZigzag(int result[], int rows, int columns)
{
    for (int i = 0; i < rows * columns; i++)
    {
        cout << result[i] << " ";
    }

}

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE];
	int result[MAX_SIZE];
	int rows = 0;
	int columns = 0;

	cout << "rows ";
	cin >> rows;
	cout << "columns ";
	cin >> columns;

    enterMatrix(matrix, rows, columns);
    zigzag(matrix, result, rows, columns);
    printZigzag(result, rows, columns);
}
