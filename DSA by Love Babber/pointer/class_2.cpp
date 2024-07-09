#include<iostream>
#include<vector>
using namespace std;

// void solve(int arr[], int size){
//     cout << sizeof(arr)<<endl;
// }
// void solve(vector<int> &v){
//     cout << sizeof(v)<<endl;
// }

int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;  


    // int a = 10;
    // int* p = &a;
    // int* q = p;
    // cout << a <<endl;
    // cout << &a <<endl;
    // cout << *a <<endl;
    // cout << p <<endl;
    // cout << &p <<endl;
    // cout << *p <<endl;
    // cout << q <<endl;
    // cout << &q <<endl;
    // cout << *q <<endl;
    // cout << **q <<endl;



    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);

    // solve(arr, size);
    // solve_vector(v);
    


    return 0;
}