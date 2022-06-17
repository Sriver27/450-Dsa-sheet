#include<iostream>
using namespace std;

void sort012(int arr[], int n){
    int s = 0, e = n-1, mid = 0;

    while(mid <= e){
        switch(arr[mid]){
            case 0:{
                swap(arr[s++], arr[mid++]);
                break;
            }
            case 1:{
                mid++;
                break;
            }
            case 2:{
                swap(arr[e--], arr[mid]);
                break;
            }
        }
    }
}

int main()
{
    int arr[6] = {2, 1, 0, 1, 0, 2};
    sort012(arr, 6);

    cout<<"Sorted array:";
    for(int i =0;i< 6; i++){
        cout<<arr[i]<<" ";
    }
}