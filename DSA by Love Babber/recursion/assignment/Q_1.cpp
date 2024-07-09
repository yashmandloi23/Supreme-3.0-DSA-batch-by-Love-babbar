#include <iostream>
using namespace std;

void LastOccurence(string&str, int index, char target, int&ans)
{
    if (index >= str.size())
    {
        return;
    }
    if (str[index] == target)
    {
        ans = index;
    }
    LastOccurence(str, index + 1, target, ans);
    // return ans;
}

int main()
{
    string str;
    cin >> str;

    char target;
    cin >> target;

    int ans = -1;
    LastOccurence(str, 0, target, ans);
    cout << ans;

    return 0;
}