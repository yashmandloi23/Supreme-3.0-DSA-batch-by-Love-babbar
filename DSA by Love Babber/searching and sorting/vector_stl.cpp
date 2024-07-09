#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v){
    cout << "vector starts from here: "<<endl;
    for(int i=0;i<v.size();i++){
        // cout << v[i] << endl;
        cout << v.at(i) << endl; // to print the value present at the i th index 
    }
}

int main(){
    vector<int> arr;
    vector<int> arr2(5,-1); //  initailize with size 5 and values -1
    vector<int> arr3 = {1,2,3,4,5,6};
    vector<int> arr5(arr3); // arr 5 got al the data of arr3 

    // v.push_back(1); // adds n elemen tin the array at the last position 
    // v.push_back(2);
    // v.push_back(3);

    // to take the user input in an vector
    // int n;
    // cin  >> n;
    // for(int i=0;i<n;i++){
    //     int data;
    //     cin >> data;
    //     v.push_back(data);
    // }

    // print(v);
    // to clear the vectore 
    // v.clear();

    // v.pop_back();
    // print(v);  // pop back last element from the array 

    return 0;
}