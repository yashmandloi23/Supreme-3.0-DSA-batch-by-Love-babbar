/*
    hamesha pivot last element ka index of array ko hi lena h
   1-> i = start-1;
       j = start;

       a[pivot] = last elemtn





*/
#include <iostream>
using namespace std;

void quickSort(int a[], int start, int end)
{
    if (start >= end)
        return;
    int pivot = end;
    int i = start - 1;
    int j = start;
    while (j < pivot)
    {
        if (a[j] < a[pivot])
        {
            ++i;
            swap(a[i], a[j]);
        }
        j++;
    }
    i++;
    swap(a[i], a[pivot]);
    quickSort(a, start, i - 1);
    quickSort(a, i + 1, end);
}

int main()
{
    int arr[] = {7, 3, 5, 8, 2, 3, 4};
    int size = 7;
    int s = 0;
    int end = size - 1;
    quickSort(arr, s, end);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}