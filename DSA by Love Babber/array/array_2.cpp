#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

void printAllPair(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}

bool TwoSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
void printTripalPair(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout << arr[i] << " " << arr[j] << arr[k] << endl;
            }
        }
    }
}
int main()
{

    int arr[] = {10, 20, 30, 40};

    int size = 4;
    // printAllPair(arr, size);
    bool ans = TwoSum(arr, size, 60);
    cout << ans;
    // print(arr, size);

    return 0;
}