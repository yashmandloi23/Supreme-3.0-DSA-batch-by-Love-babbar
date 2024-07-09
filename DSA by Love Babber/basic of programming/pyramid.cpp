#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int j = 0; j < n - row - 1; j++)
            cout << " ";

            
        for (int i = 0; i < row + 1; i++)
            cout << " * ";
        
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pyramid(n);

    return 0;
}