// palindrom check function 

#include<iostream>
using namespace std;

bool palindromcheck(string str, int s, int e){
    if(s > e){
        return true;
    }
    if(str[s] != str[e]){
        return false; 
    }
    return palindromcheck(str, s + 1, e - 1);
    
}

int main(){

    string str = "racecar";
    // cin >> str;

    cout <<  palindromcheck(str, 0, str.size()-1);

    return 0;
}