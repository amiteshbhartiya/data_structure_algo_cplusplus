#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int binarySearch(int arr[], int size, int n) {
    
    int low = 0;
    int high = size-1;
    int mid;
    
    while(low <= high) {
        mid = floor(low + ((high - low) / 2));
        cout << arr[mid] << "--" << mid <<endl;
        if(n == arr[mid]) {
            return mid;
        }
        
        if(n > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
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
    
    int output = binarySearch(arr, size, n);
    
    if (output == -1) {
        cout << "Number Not Found";
    } else {
        cout << "Number found at index no " << output;
    }
    
    cout <<endl;
    
    return 0;
}
