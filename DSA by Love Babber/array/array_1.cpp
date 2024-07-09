#include <iostream>
#include<limits.h>
using namespace std;

bool LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    // agar target nahi h array mai to falser return hoga
    return false;
}

int Find_Max(int arr[], int size)
{
    int Max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (Max < arr[i])
        {
            Max = arr[i];
        }
    }
    return Max;
}
int Find_Min(int arr[], int size)
{
    int min = INT_MIN;
    int Min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (Min > arr[i])
        {
            Min = arr[i];
        }
    }
    return Min;
}
int count(int arr[], int size)
{
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            if (arr[i] == 0)
            {
                count0++;
            }
        }
    }
    cout << "count of zero is " << count0 << endl;
    cout << "count of one is " << count1 << endl;
}
void extremePrint(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        cout << arr[i] << " ";
        i++;
        if(j>i){
            cout << arr[j] << " ";
            j--;
        }
    }
}
void swap(int a, int b)
{
    int c = b;
    b = a;
    a = c;
    cout << a << " " << b;
}
void reverse(int arr[], int n){
    int i = 0;
    int j = n-1;
    while (j<i)
    {
        swap(i,j);
        i++;
        j--;
    }
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 0, 1, 0};
    int array[7] = {10,30,79,48,59,29,88};
    print(array,7);
    cout << endl;
    cout << "array after reversing " << endl;
    int a = 4;
    int b = 5;
    int size = 5;
    // for (int index = 0; index < size; index++)
    // {
    //     cin >> arr[index];
    // }
    // int Max = count(arr, 5);
    // count(arr,5);
    // extremePrint(array,7);
    // cout << Max;
    reverse(array,7);
    print(array,7);
    // swap(a, b);

    // int crr[10];

    return 0;
}