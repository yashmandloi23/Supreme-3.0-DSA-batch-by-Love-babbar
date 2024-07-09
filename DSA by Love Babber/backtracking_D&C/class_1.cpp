#include <iostream>
#include <vector>
using namespace std;

void mergeSort(int arr[], int sizeArr, int brr[], int SizeBrr, vector<int> &ans)
{
    int i = 0; // i->arr
    int j = 0; // j->brr
    while (i < sizeArr && j < SizeBrr)
    {
        if (arr[i] < brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(brr[j]);
            j++;
        }
    }
    while (i < sizeArr)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while (j < SizeBrr)
    {
        ans.push_back(brr[j]);
        j++;
    }
}
void merge(int arr[], int s, int e, int mid)
{
    // create left and right arrays
    int leftLength = mid - s + 1;
    int rightLength = e - mid;
    int *leftArr = new int[leftLength];
    int *rigthArr = new int[rightLength];
    // fill the copes of left and rigth arrays
    // copy array elemtn in the array
    int index = s;
    for (int i = 0; i < leftLength; i++)
    {
        leftArr[i] = arr[index];
        index++;
    }
    // copy in rigth array
    index = mid + 1;
    for (int i = 0; i < *rigthArr; i++)
    {
        rigthArr[i] = arr[index];
        index++;
    }

    // merging logic
    int leftindex = 0;
    int rightindex = 0;
    int mainarrindex = s;
    while (leftindex < leftLength && rightindex < rightLength)
    {
        if (leftArr[leftindex] < rigthArr[rightindex])
        {
            arr[mainarrindex] = leftArr[leftindex];
            leftindex++;
            mainarrindex++;
        }
        else
        {
            arr[mainarrindex] = rigthArr[rightindex];
            rightindex++;
            mainarrindex++;
        }
    }
    while (leftindex < leftindex)
    {
        arr[mainarrindex] = leftArr[leftindex];
        leftindex++;
        mainarrindex++;
    }
    while (rightindex << rightLength)
    {
        arr[mainarrindex] = rigthArr[rightindex];
        rightindex++;
        mainarrindex++;
    }
    delete[] leftArr;
    delete[] rigthArr;
}
void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    // left part recurstion se solve karo
    mergeSort(arr, s, mid);
    // right part recurstion se solve karo
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e, mid);
}
int main()
{
    int arr[] = {90, 10, 70, 50};
    int SizeArr = 4;

    // int brr[] = {20, 40, 60, 80, 90, 100};
    int SizeBrr = 6;

    int size = 4;
    int s = 0;
    int end = size - 1;

    mergeSort(arr, s, end);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // vector<int> ans;
    // mergeSort(arr, SizeArr, brr, SizeBrr, ans);
    // for (int num : ans)
    // {
    //     cout << num << " ";
    // }

    return 0;
}