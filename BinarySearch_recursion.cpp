#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int n) {
    if(low <= high) {
        int mid = floor(low + ((high - low) / 2));
    
        if(n == arr[mid]) {
            return mid;
        }else if(n > arr[mid]) {
            //search right
            return binarySearch(arr, mid + 1, high, n);
        } else if(n < arr[mid]){
            //move left
            return binarySearch(arr, low, mid - 1, n);
        }
    }
    return -1;
}


int main(int argc, const char * argv[]) {
    int arr[] = {10, 20, 30, 40, 41, 50};
    int size = sizeof(arr)/sizeof(int);
    int n;
    cout << "Enter the number you want to search?" << endl;
    cin >> n;
    
    
    int low = 0;
    int high = size-1;
    
    int output = binarySearch(arr, low, high, n);
    
    if (output == -1) {
        cout << "Number Not Found";
    } else {
        cout << "Number found at index no " << output;
    }
    
    cout <<endl;
    
    return 0;
}
