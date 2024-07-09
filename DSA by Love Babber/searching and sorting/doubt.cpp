#include<iostream>
using namespace std;

void sort_zero_one(int arr[],int size){
    int l = 0;
    int h = size-1;
    while (l<h)
    {
        swap(l,h);
        l++;
        h--;
    }
    
}

int main(){
    int arr[7] = {1,0,1,0,1,0,0};
    int size = 7;
    int ans = sort_zero_one(arr,size);
    cout << ans;

    return 0;
}