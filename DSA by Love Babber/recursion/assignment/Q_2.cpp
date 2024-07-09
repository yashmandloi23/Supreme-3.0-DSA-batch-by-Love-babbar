#include <iostream>
using namespace std;

void swaping(string &str, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    swap(str[start], str[end]);
    swaping(str, start + 1, end - 1);
}

int main()
{
    string str = "abcd";

    swaping(str, 0, str.size() - 1);
    cout << str << endl;

    return 0;
}