#include<iostream>
using namespace std;
int main(){
    // @Desc Dynamically allocate the memory syntax
    int* ptrVar=new int;
    *ptrVar=10;
    cout<<*ptrVar<<endl;
    //Deallocate the memory
    // @Note This'll delete only the dynamic memory allocated variable but not class variable
    delete ptrVar;
    cout<<*ptrVar<<"Value of ptrVar is deleted";
    return 0;
}