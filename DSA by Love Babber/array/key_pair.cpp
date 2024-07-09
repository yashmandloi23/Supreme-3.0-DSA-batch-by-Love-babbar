// to return a pair who's sum is equal to a value given by user

#include <iostream>
using namespace std;
void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            arr[i] = arr[i + 1];
        }
    }
}
bool key_pair(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

bool sample(int arr[], int size, int x)
{
    int l = arr[0];
    int h = arr[size - 1];
    while (l < h)
    {
        int csum = arr[l] + arr[h];
        if (csum == x)
        {
            return true;
        }
        else if (csum > x)
        {
            h--;
        }
        else if (csum < x)
        {
            l++;
        }
    }
}



int main()
{
    int arr[6] = {1, 4, 45, 6, 10, 8};
    // int arr2[6] = sort(arr, 6);
    int keyPair = sample(arr, 6, 16);

    cout << keyPair;

    return 0;
}