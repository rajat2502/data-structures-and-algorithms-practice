#include <iostream>
using namespace std;

int Binary_Search(int a[], int n, int x){
    int start = 0, end = n-1, mid;
    while(start <= end){
        mid = start + ((end - start)/2);
        if(a[mid] == x) return mid;
        else if(a[mid] > x) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int main() {
    int n, i, x, a;
    printf("Enter number of elements\n");
    cin>>n;
    int arr[n];    
    printf("Enter a Sorted Array\n");
    for(i=0; i<n; i++) cin>>arr[i];
    printf("Enter the number you want to search for\n");
    cin>>x;
    a = Binary_Search(arr, n, x);
    cout<<a<<endl;
	return 0;
}