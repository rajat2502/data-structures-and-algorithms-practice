#include <bits/stdc++.h> 
using namespace std;

int partition(int *a, int start, int end){
    int pivot = a[end];
    int partitionIndex = start;
    for(int i=start; i<end; i++){
        if(a[i]<=pivot){
            swap(a[i], a[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(a[partitionIndex], a[end]);
    return partitionIndex;
}

// void randomizedPartition(int *a, int start, int end){
//     int pivotIndex =  end + rand() % (( start + 1 ) - end);
//     swap(a[pivotIndex], a[end]);
// }

void quickSort(int *a, int start, int end){
    if(start<end){
        // randomizedPartition(a, start, end);
        int partitionIndex = partition(a, start, end);
        quickSort(a, start, partitionIndex-1);
        quickSort(a, partitionIndex+1, end);
    }
}

int main() {
	int n, i;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++) cin>>a[i];
	quickSort(a, 0, n-1);
	for(i=0; i<n; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}