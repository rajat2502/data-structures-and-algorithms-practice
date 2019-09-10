#include <iostream>
using namespace std;

int get_max(int *arr, int n){
    int max = arr[0];
    for(int i=0; i<n ;i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

void count_sort(int *arr, int n, int e){
    int output[n];
    int i, count[10] = {0};
    for(i=0; i<n; i++) count[(arr[i]/e)%10]++;
    for(i=1; i<10; i++) count[i]+=count[i-1];
    for(i=n-1; i>=0; i--){
        output[count[(arr[i]/e)%10]-1] = arr[i];
        count[(arr[i]/e)%10]--;
    }
    for(i=0; i<n; i++) arr[i] = output[i];
}

void radix_sort(int *arr, int n){
    int max = get_max(arr, n);
    int e;
    for(e=1; (max/e)>0; e*=10){
        count_sort(arr, n, e);
    }
}

int main() {
    int n, i;
	cin>>n;
	int arr[n];
	for(i=0; i<n; i++) cin>>arr[i];
	radix_sort(arr, n);
	for(i=0; i<n; i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}