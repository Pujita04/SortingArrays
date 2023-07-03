//selection sorting

#include<iostream>
using namespace std;

void printing_arr(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


void selectionSort(int arr[], int n) {

    for(int i=0; i<(n-1); i++) {
        int minIndex = i;

        for(int j = (i+1); j<n; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }

        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {

    int arr[5] = {4, 25, 64, 23, 5};
    selectionSort(arr, 5);

    printing_arr(arr, 5);


    return 0;
}