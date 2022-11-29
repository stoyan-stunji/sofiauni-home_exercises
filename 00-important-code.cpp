//swap

void swap(int& num1, int& num2)
{
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

//sort

void sortArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size + 1; j++)
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
