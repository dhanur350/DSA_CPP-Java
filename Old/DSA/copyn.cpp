#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cout << "How much space u give ?";
    cin >> n;
    char input[n];
    char copyInput[n];
    cin.ignore(); // We'll need when compiler doesn't reach getline
    cout << endl
         << "Enter your string input ";
    cin.getline(input, n, '\n');
    cout<<"How many characters do u want to copy ? ->";
    int num;cin>>num;
    cout << endl
         << "Here is ->" << input << endl;
    strncpy(copyInput,input,num);
    /* strncpy(copyInput, input, num); 3 parameters in this strncpy function
     *          |<-<-<--<-<--|    |---> How many characters to copy 
     *      Data will     Data stored
     *      Pass to       in this variable
     *      this          will pass from right
     *      Variable      to left
     */
    cout << "Copied input n characters are " << copyInput << endl;
    return 0;
}
/*
    string line;
    cin >> line;
    cout << line;
*/