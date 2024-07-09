#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creation
    vector<int> marks;
    // to add some element in the vector in the end 
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    // to find a alement at an index given by user
    cout << marks.at(1);
    // to print the size of the marks
    // to remove the last element 
    // marks.pop_back();
    // cout << marks.size();
    // cout << marks.front(); // to get the front or first element of the array 
    //cout << marks.front(); // to get the back or last element of the array 

    // cout << (*marks.begin());

    // vector<int> miles(10); // to inetialize vector with size 10

    // vector<int> distances(15, 0); // to netialize every element in the vectore with 0

    return 0;
}