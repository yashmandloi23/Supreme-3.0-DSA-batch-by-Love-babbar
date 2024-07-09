#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // int* ptr = &a; // pointer points to address of a 
    // int* q = ptr; // q pointer stores the ptr or pointer ki copy
    // // cout << ptr ;
    // // arrya using pointer 
    // int  arr[] = {10,20,30,40};
    // int* pointer = arr;
    // for(int i=0;i<=4;i++){
    //     cout << arr;
    //     // arr++;
    // }
    
    char ch[10] = "yash";
    char* cptr = ch;

    cout << "ch: " << ch << endl; 
    cout << "&ch: " << &ch << endl; 
    cout << "ch[0]: " << ch[0] << endl; 
    cout << "&cptr: " << &cptr << endl; 
    cout << "*cptr: " << *cptr << endl; 
    cout << "(ch+3): " << (ch+3) << endl; 
    cout << "cptr" << cptr << endl; 

    return 0;
}