#include <iostream>
// #include <algorithm>
using namespace std;
void printArr(int arr[], int size, int index)
{
    if (index == size)
    {
        return; // base case
    }
    // recursive relation
    cout << arr[index] << " ";
    printArr(arr, size, index + 1);
}

bool search(int arr[], int size, int index, int target)

{
    if (index == size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }
    bool ans = search(arr, size, index + 1, target);
    return ans;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int MaxInArrar(int arr[], int size, int index, int &maxi)
{
    if (index == size)
    {
        return index;
    }
    maxi = max(maxi, arr[index]);
    MaxInArrar(arr, size, index + 1, maxi);
    return maxi;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
        return b;
}

void printOdd(int arr[], int index, int size)
{
    if (index == size)
    {
        return;
    }

    if (arr[index] & 1)
    {
        cout << arr[index] << " ";
    }

    printOdd(arr, index + 1, size);
}
// int MinInArrar(int arr[], int size, int index, int &min)
// {
//     if (index == size)
//     {
//         return min;
//     }
//     min = min(min, arr[index]);
//     MinInArrar(arr, size, index + 1, min);
//     return min;
// }
int recursiveBinarySearch(int arr[], int size, int target, int s, int e)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    if (target > arr[mid])
    {
        // target bada hai to right mai shift ho gaya isliya s ko replace kiya mid +1 se
        return recursiveBinarySearch(arr, size, target, mid + 1, e);
    }
    if (target < arr[mid])
    {
        // target chota hai to left mai shift ho gaya isliya end ko replace kiya mid - 1 se
        return recursiveBinarySearch(arr, size, target, s, mid - 1);
    }
}

int BinarySearch(int arr[], int size, int target)
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
        if (target > arr[mid])
        {
            s = mid + 1;
        }
        if (target < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

void PrintDigit(int num)
{
    if (num == 0)
    {
        return; // base case to stop recursion
    }

    int newnum = num / 10;

    PrintDigit(newnum);

    int digit = num % 10;

    cout << digit << " ";
}
bool chechkSum(int arr[], int size, int index)
{
    if (index == size)
    {
        return true;
    }
    bool currentAns = false;
    bool recursiveAns = false;
    if (arr[index] < arr[index] + 1)
    {
        currentAns = true;
    }
    recursiveAns = chechkSum(arr,size,index+1);
    if(currentAns == true && recursiveAns == true)
    return true;
    else{
        return false;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;

    int index = 0;

    int target = 50;

    int s = 0;

    int e = size - 1;

    int num = 87654;

    cout << chechkSum(arr, size, index);

    // cout << ans;

    // PrintDigit(num);

    // cout << BinarySearch(arr, size, target);

    // cout << recursiveBinarySearch(arr, size, target, s, e);

    // int target = 60;
    // int maxi = arr[0];
    // int min = arr[0];

    // cout << MaxInArrar(arr, size, index, maxi);

    // cout << MaxInArrar(arr,size,index,maxi) ;

    // int ans = MaxInArrar(arr,size,index,maxi);

    // int ans = MinInArrar(arr, size, index, min);

    // printOdd(arr, index, size);

    // cout << ans;

    // cout << search(arr, size, index, target);

    // printArr(arr, size, index);

    return 0;
}