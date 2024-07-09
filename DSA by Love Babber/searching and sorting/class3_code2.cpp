#include <iostream>
using namespace std;

int binarySearch(int arr, int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if (target > arr[mid])
        {
            // right
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {20, 1, 30, 40, 50};
    int size = 5;
    int target = 30;

    return 0;
}