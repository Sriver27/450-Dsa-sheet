#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[10];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int k;
        cin >> k;

        bubbleSort(arr,n);

        cout<<"kth smallest element in array :"<< arr[k-1];

        return arr[k-1];
    }
}