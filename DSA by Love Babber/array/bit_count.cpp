// to count the number of 1's and 0's in an array 
#include<iostream>
// #include<algo

using namespace std;
void sorts(int arr[], int size){
    int zero_count = 0;
    int once_count = 0;
    for (int  i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
            zero_count++;
        }
        else if (arr[i]==1)
        {
            once_count++;
        }        
    }
    for (int i = 0; i < zero_count; i++)
    {
        arr[i] =0;
    }
    for (int i = 0; i < once_count; i++)
    {
        arr[i]= 1;
    }
    
    // fill(arr,arr+zerocount,0)
    // fill(arr+zerocount,arr+n,1)
    
}
int main(){
    int arr[5] = {0,1,0,1,1};

    cout << arr[0];

    return 0;
}