#include <iostream>
using namespace std;
void last_Occurence(int arr[], int size, int target, int &ans)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
            // hamai lsat occurence chaiya to right mai check karna hoga
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}
void first_OCcurence(int arr[], int size, int target, int &ans)
{
    //  yaha pe store and compute kiya h kiyo ki first occurenece nikal ni h
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // mai aur may not be the first ocuurenece
            // store and computer
            ans = mid;
            // to left mai jao kiyo ki first occurence left mai milagi
            e = mid - 1;
        }
        if (target > arr[mid])
        {
            // right mai jana hoga
            s = mid + 1;
        }
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}
int binary_search(int arr[], int size, int target)
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
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
}
int main()
{

    int arr[5] = {20, 20, 20, 40, 50};

    int size = 5;
    int target = 20;
    int ans = -1;
    last_Occurence(arr, size, target, ans);
    // first_OCcurence(arr, size, target, ans);
    cout << ans;

    return 0;
}