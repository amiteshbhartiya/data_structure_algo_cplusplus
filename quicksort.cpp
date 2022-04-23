#include<bits/stdc++.h>
#include<vector>

using namespace std;


int partition(vector<int> &arr, int s, int e) {
	int pivot = arr[e];
	int i = s;

	for(int j=s; j<e; j++) {
		if(arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
		}

	}
    swap(arr[i], arr[e]);
    return i;
}



void quicksort (vector<int> &arr, int s, int e) {

	if( s>=e ) {
		return;
	}

int p = partition(arr, s, e);

quicksort(arr, s, p-1);
quicksort(arr, p+1, e);

} 



int main()
{
  
 vector<int> arr{10,5,2,0,7,6,4};
int n = arr.size();

    quicksort(arr, 0, n-1);

    for(int x : arr) {
    	cout << x << " ";
    }


	return 0;
}
