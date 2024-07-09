#include <iostream>
#include<algorithm>

using namespace std;
void fun(int &num, int k)
{
    num &= (~(1 << k));
}

void bin(int n)
{
    if (n > 1)
        bin(n / 2);
    cout << n % 2;
}

int function(int n)
{
    int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return 0;
}

int main()
{
    int num = 5;
    int arr[5] = {1,4,6,8,5};
    // cout << function(num);
    // reverse(arr,5);
    for (int i = 0; i <=5; i++)
    {
        cout<< arr[i] << endl;
    }
    
    // int k =1;
    // fun(num,k);
    // cout << num;
    // cout << (~ num +1);
    // bin(num);

    return 0;
}