#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Bubble Sort - O(n^2)
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort - O(n^2)
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Insertion Sort - O(n^2) worst, O(n) best
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int size = 5;

    int a1[] = {50, 20, 40, 10, 30};
    bubbleSort(a1, size);
    cout << "Bubble Sort:    ";
    printArr(a1, size);

    int a2[] = {50, 20, 40, 10, 30};
    selectionSort(a2, size);
    cout << "Selection Sort: ";
    printArr(a2, size);

    int a3[] = {50, 20, 40, 10, 30};
    insertionSort(a3, size);
    cout << "Insertion Sort: ";
    printArr(a3, size);

    return 0;
}
