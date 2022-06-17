// cyclically rotate array by one

#include<iostream>
using namespace std;

// void rotate(int arr[], int n) -->   Approach 2 : 2-pointer {TC: O(n)}
// {
//     int i = 0, j = n-1; // i and j pointing to first and last element respectively
//       while(i != j){
//       swap(arr[i], arr[j]);
//       i++;
//     }
// }

void rotate(int arr[], int n) // Approach 1 : iterative {TC: O(n)}
{
 for(int i = 0; i < n; i++)
 {
    swap(arr[i], arr[n-1]);
 }
}

int main() 
{
    int arr[]={3,1,2,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original array :";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotate(arr,n);


    cout<<"Rotated array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}