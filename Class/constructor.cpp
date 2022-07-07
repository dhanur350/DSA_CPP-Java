#include<iostream>
using namespace std;
class base
{
    public:
    base(){//constructor
    int arr[5];
    
    cout<<"We are inside constructor";
    }    
    ~base(){
        int arr=10;
        cout<<arr;
    }
}; // namespace std;
int main(){
    base obj;
}