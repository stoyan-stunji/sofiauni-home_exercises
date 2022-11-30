#include <iostream>

using namespace std;

const int MAX_SIZE_ROWS = 20;
const int MAX_SIZE_COLUMNS = 30;

void enterMatrix(int matrix[][MAX_SIZE_COLUMNS], int rows, int columns)
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

int getPoint(int matrix[][MAX_SIZE_COLUMNS], int rows, int columns)
{
    int maxIndex = matrix[0][0];
    int minIndex = matrix[0][0];
    int point = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] > maxIndex)
            {
                maxIndex = matrix[i][j];
            }

            if (matrix[i][j] < minIndex)
            {
                minIndex = matrix[i][j];
            }

            if (minIndex == maxIndex)
            {
                point = matrix[i][j];
            }
        }
    }
    return point;
}

int main()
{
    int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLUMNS];
    int rows = 0;
    int columns = 0;

    cout << "rows ";
    cin >> rows;

    cout << "columns ";
    cin >> columns;

    enterMatrix(matrix, rows, columns);
    cout << getPoint(matrix, rows, columns);
}
