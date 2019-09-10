#include <iostream>
#include <algorithm>
using namespace std;

void count_sort(int *arr, int n, int k){
    int count[k+1] = {0};
    int i, j, l;
    for(i=0; i<n; i++) count[arr[i]] += 1;
    for(i=0; i<k+1; i++){
        for(j=1; j<=count[i]; j++){
            arr[l] = i;
            l++;
        }
    }
}

int main() {
	int n, i;
	cin>>n;
	int arr[n];
	for(i=0; i<n; i++) cin>>arr[i];
	int max = arr[0];
	for(i=0; i<n; i++){
	    if(arr[i] > max) max = arr[i];
	}
	count_sort(arr, n, max);
	for(i=0; i<n; i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}