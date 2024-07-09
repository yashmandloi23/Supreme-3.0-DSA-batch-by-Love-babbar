#include<iostream>
using namespace std;

bool LinerSearch(int arr[], int n, int target){
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]==target){
            return true;
        }
    }
    return false;
    
}

int main(){

    int arr[2] = {10,20};

    //cout << arr[0] << " "<<arr[1] << endl;


    // fill(arr,arr+2,30);
    // cout << arr[0] << " "<<arr[1] << endl;

    cout << LinerSearch(arr,2,20) << endl;

    return 0;
}