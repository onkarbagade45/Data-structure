#include <iostream>
using namespace std;

// Traversal - O(n)
void traversal(int arr[], int n)
{
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Insertion - O(n) : insert 'value' at index 'pos'
int insertion(int arr[], int n, int pos, int value)
{
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    return n + 1; // new size
}

// Deletion - O(n) : delete element at index 'pos'
int deletion(int arr[], int n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return n - 1; // new size
}

// Updating - O(1)
void updateElement(int arr[], int pos, int value)
{
    arr[pos] = value;
}

int main()
{
    int arr[10] = {50, 20, 40, 10, 30};
    int n = 5;

    cout << "Original array:" << endl;
    traversal(arr, n);

    n = insertion(arr, n, 2, 99); // insert 99 at index 2
    cout << "\nAfter inserting 99 at index 2:" << endl;
    traversal(arr, n);

    n = deletion(arr, n, 2); // delete element at index 2
    cout << "\nAfter deleting element at index 2:" << endl;
    traversal(arr, n);

    updateElement(arr, 0, 100);
    cout << "\nAfter updating index 0 to 100:" << endl;
    traversal(arr, n);

    return 0;
}
