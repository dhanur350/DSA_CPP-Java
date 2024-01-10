#include<iostream>
using namespace std;
int main(){
    try//It'll by default try the value of program and it'll be true
    {
        int x=11;
        if(x==10){//If This statement is true this'll be executed 
            //throw x;
            cout<<"Statement is true";
        }
        else if(x==11){//Then throw will send a value to the catch block
            throw x;
        }
    }
    catch(int x)//Throw will send the value of x which else if discarded and error will be handled here
    {
        cout<<"Error caught"<<x;
    }
    //cout<<"Error caught";
}