#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}