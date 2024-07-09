#include <iostream>
using namespace std;

int maim()
{
    // declearation of array
    // int arr[4][4];

    // initialise
    int arr[4][4] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4},
    };
    cout << arr[1][1] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}