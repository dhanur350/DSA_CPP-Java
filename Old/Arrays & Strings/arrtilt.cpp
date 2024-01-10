#include <iostream>
using namespace std;

const int dim=3;
void tiltarr(int arr[][dim])
{
    int cache;
    for (int i = 0; i < dim / 2; i++) {
        for (int j = i; j < dim - i - 1; j++) {
            
            cache = arr[i][j]; //save index in cache variable
            arr[i][j] = arr[j][dim - 1 - i]; //right to top
            arr[j][dim - 1 - i] = arr[dim - 1 - i][dim - 1 - j]; //bottom to right
            arr[dim - 1 - i][dim - 1 - j] = arr[dim - 1 - j][i]; //left to bottom
            arr[dim - 1 - j][i] = cache; //Apply cache value to left side
        }
    }
}

//Print final tilted array
void arrshow(int arr[dim][dim])
{
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(void)
{
    int arr[dim][dim];
    cout<<"Enter the elements in 3x3 Matrix"<<endl;
    for(int i = 0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    tiltarr(arr);
    arrshow(arr);
}