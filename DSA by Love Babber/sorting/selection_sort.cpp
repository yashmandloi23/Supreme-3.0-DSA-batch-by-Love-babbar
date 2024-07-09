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

void selectionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // ith elemt is smallest
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        // swap min index with the ith index
        swap(v[i], v[minIndex]);
    }
}

int main()
{
    vector<int> v = {5,23,45,67,8};
    selectionSort(v);
    print(v);

    return 0;
}