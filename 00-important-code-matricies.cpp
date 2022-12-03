#include <iostream>

using namespace std;

const int MAX = 40;

void enterMatrx(int matrix[][MAX], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void matrixMainDiagonal(int matrix[][MAX], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
}

void matrixSecondDiagonal(int matrix[][MAX], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == size - 1 - j)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
}

void swap(int& n1, int& n2)
{
	int temp = 0;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

void swapDiagonals(int matrix[][MAX], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == i)
			{
				swap(matrix[i][j], matrix[i][size - j - 1]);
			}
		}
	}
}


void printMatrix(int matrix[][MAX], int size)
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

void transpose(int matrix[][MAX], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
				swap(matrix[i][j], matrix[j][i]);
		}
	}
}

bool isPalindrome(int matrix[][MAX], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (i == j)
			{
				if (matrix[i][j] == matrix[size - 1 - i][size - 1 - j])
				{
					return true;
				}
			}
		}
	}
	return false;
}

int main()
{
	int matrix[MAX][MAX];
	int size = 0;

	cin >> size;
	enterMatrx(matrix, size);
	cout << endl;
	cout << boolalpha << isPalindrome(matrix, size) << endl;
	cout << endl;
	matrixMainDiagonal(matrix, size);
	cout << endl;
	cout << endl;
	matrixSecondDiagonal(matrix, size);
	cout << endl;
	cout << endl;
	transpose(matrix, size);
	printMatrix(matrix, size);
	cout << endl;
	swapDiagonals(matrix, size);
	printMatrix(matrix, size);

}
