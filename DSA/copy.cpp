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
    cout << endl
         << "Here is ->" << input << endl;
    strcpy(copyInput, input);
    /**     |           |
     *    Data will     Data stored
     *    Pass to       in this variable
     *    this          will pass from right
     *    Variable      to left
     */
    cout << "Copied input is " << copyInput << endl;
    return 0;
}
/*
    string line;
    cin >> line;
    cout << line;
*/