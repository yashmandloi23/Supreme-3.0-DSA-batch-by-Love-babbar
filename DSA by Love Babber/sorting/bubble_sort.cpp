#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    bubbleSort(arr);

    print(arr);

    return 0;
}