#include <iostream>
using namespace std;

void printSubsequence(string str, int index, string output)
{
    if (index == str.length())
    {
        cout << output << " ";
        
        return;
    }
    char ch = str[index];
    // including ch

    // output.push_back(ch);

    printSubsequence(str, index + 1, output + ch);

    // excludign ch
    printSubsequence(str, index + 1, output);
}

int main()
{

    string str = "abc";

    int index = 0;

    string output = "";

    printSubsequence(str, index, output);

    return 0;
}