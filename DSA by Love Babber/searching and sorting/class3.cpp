#include<iostream>
using namespace std;

int getQuestient(int dividend, int divisor){
    int s = -dividend;
    int e = dividend;
    int mid = s + ((e-s)>>1);
    int ans = -1;
    while(s<=e){
        if(divisor * mid == dividend){
            return mid;
        }
        if(divisor * mid < dividend){
            ans = mid; // store and computer 
            s = mid -1; // right shift 
        }
        else{
            e = mid-1; // left shift
        }
        mid = s + ((e-s)>>1);
    }
    return ans;
}

int main(){
    int diviser = 10;
    int dividend = 3;

    int ans = getQuestient(dividend,diviser);


    return 0;
}