#include <iostream>
using namespace std;

int getLenght(char arr[], int size)
{
    int count = 0;
    int index = 0;
    while (arr[index] != '0')
    {            // jab tak array mai null character nahi milta tab tak increment kro and aaga badho
        count++; // to increase the count while index is not null
        index++;
    }
    return count;
}

void replaceChar(char original, char replacedBy, char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == original)
        {
            arr[i] = replacedBy;
        }
    }
}

void ConverToUpperCase(char upperCase, char Lowercase, char arr[], int size)
{
    int length = getLenght(arr, size);
    for (int i = 0; i < length; i++)
    {
        char ch = arr[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 'a' + 'A';
        }
        arr[i] = ch;
    }
}


void ConverToLowerCase(char upperCase, char Lowercase, char arr[], int size)
{
    int length = getLenght(arr, size);
    for (int i = 0; i < length; i++)
    {
        char ch = arr[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - 'a' + 'A';
        }
        arr[i] = ch;
    }
}

void reverseCharArray(char arr[], int n)
{
    int len = getLenght(arr, n);
    int i = 0;
    int j = len - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

bool Palindrom(char arr[], int n)
{
    int len = getLenght(arr, n);
    int i = 0;
    int j = len - 1;
    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            // not a palindrom
            return false;
        }
    }
    // valid palindrom
    return true;
}

int main()
{
    

    // char arr[20]; // creating
    // cout << "Enter your name: ";
    // cin >> arr;

    // cout << Palindrom(arr, 20);

    // cin.getline(arr, 20);
    // read a line of input into arr, including spaces
    // cout << getLenght(arr, 20);   // to get the length of the array
    // replaceChar('@', ' ', arr, 20);

    // ConverToUpperCase('a','z',arr,20);
    // cout << arr;

    // cout << "Your name is: " << arr;

    return 0;
}
