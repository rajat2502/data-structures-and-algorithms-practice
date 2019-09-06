#include <iostream>
using namespace std;

int Binary_Search(int a[],int start, int end, int x){
    int mid = start + ((end - start)/2);
    if(start > end) return -1;
    else if(a[mid] == x) return mid;
    else if(a[mid] > x) Binary_Search(a, start, mid-1, x);
    else if(a[mid] < x) Binary_Search(a, mid + 1, end, x);
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
    a = Binary_Search(arr,0, n, x);
    cout<<a<<endl;
	return 0;
}