#include <iostream>
using namespace std;
void reverse_array(int arr[], int n)
{
    int l = 0;
    int h = n - 1;
    while (l < h)
    {
        swap(arr[l], arr[h]);
        l++;
        h--;
    }
}
int main()
{

    int arr[6] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse_array(arr, 6);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}