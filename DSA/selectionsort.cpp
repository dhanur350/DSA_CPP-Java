#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void selectionSort(int a[], int n)
{

    for (int i = 0; i <= n - 2; i++)
    {
        // Iterate array till 2nd last of array index
        int smallest = i;
        // Initialize array smallest with staring index for now
        for (int j = i + 1; j <= n - 1; j++)
        {
            // Now to iterate from 2nd index till last index
            if (a[j] < a[smallest])
            {
                // If array index is less than smallest one
                smallest = j;
            }
        }
        swap(a[i], a[smallest]);
    }
}
int main()
{
    // vector<int>
    int n;
    int smallest = INT_MAX;
    //Setting up macr to set size of macro
    cout << "Enter size of array";
    cin >> n;//taking input of array
    int arr[n];
    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        // int input;
        cin >> arr[i];
        // arr.push_back(input);
    }
    // Array before sorting
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    selectionSort(arr, n);
    // Array after doing selection sort
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}

/*for (int i = 0; i <= n - 2; i++)
{
    int smallest = i;
    for (int j = i + 1; j <= n - 1; j++)
    {

        if (a[j] < a[smallest])
        {
            smallest = j;
        }
    }

    swap(a[i], a[smallest]);
}*/

/*int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    selectionSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}*/
/*void selectionSort(int arr[], int n)
{//vector<int>
    for(int i = 0;i<=n-2;i++){
        int smallest = INT_MAX;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<smallest){
                smallest = arr[j];
            }
            if(arr[i]>smallest){
                swap(arr[i],arr[smallest]);
            }

        }
    }

}*/