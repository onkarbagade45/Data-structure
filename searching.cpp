#include <iostream>
using namespace std;

// Linear Search - O(n) : works on unsorted data
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// Binary Search - O(log n) : array MUST be sorted
int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {50, 20, 40, 10, 30};
    int n = 5;

    int key = 40;
    int idx = linearSearch(arr, n, key);
    cout << "Linear Search for " << key << ": ";
    if (idx != -1)
        cout << "Found at index " << idx << endl;
    else
        cout << "Not Found" << endl;

    // Binary search needs a sorted array
    int sortedArr[] = {10, 20, 30, 40, 50};
    int searchKey = 40;
    int result = binarySearch(sortedArr, n, searchKey);
    cout << "Binary Search for " << searchKey << ": ";
    if (result != -1)
        cout << "Found at index " << result << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
