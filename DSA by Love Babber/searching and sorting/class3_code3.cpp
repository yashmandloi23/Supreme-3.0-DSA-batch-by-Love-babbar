#include <iostream>
using namespace std;

int oddOccurence(int arr[], int size)
{
    // find odd occurence element
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        // duplicat exist in left index
        if (mid - 1 > 0 && arr[mid] != arr[mid - 1] && mid + 1 < size && arr[mid] != arr[mid - 1])
        {
            return mid;
        }
        // duplicat exist in right index
        if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
        {
            int pairIndex = mid - 1;
            if (pairIndex & 1)
            {
                e = mid - 1;
                // pair ka atarting index is odd
                // we are in right part
            }
            else
            {
                s = mid + 1;
            }
            if (true)
            {
            }
        }
        // duplicat does not exist
    }
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7};

    int size = 13;

    return 0;
}