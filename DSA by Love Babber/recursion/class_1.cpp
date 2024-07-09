#include <iostream>
using namespace std;

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = 2 * power(n - 1);
    return ans;
}
void printCount(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";  // processing
    printCount(n - 1); // recursive call
}

void printCount2(int n)
{
    if (n == 0)
    {
        return;
    }
    printCount2(n - 1); // recursive call
    cout << n << " ";   // processing
}

int getFact(int n)
{
    if (n == 0)
        return 1;

    int ans = n * getFact(n - 1);
    int finalAns = n * ans;

    int AnsBydirectcall = n * getFact(n - 1);
    return ans;
}

int fibonacci_series(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int ans = fibonacci_series(n - 1) + fibonacci_series(n - 2);
    return ans;
}

int getSum(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int ans = n + getSum(n - 1);
    return ans;
}

int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;

    // int ans = getFact(n);

    // printCount2(n);

    // cout << power(n);

    // cout << fibonacci_series(n);

    // cout << ans;
    cout << getSum(n);

    return 0;
}
