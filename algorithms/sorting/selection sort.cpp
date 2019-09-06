#include <iostream>
using namespace std;

void SelectionSort(int a[], int n){
    int i, j, min, temp;
    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1; j<n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main() {
    int n;
    cin>>n;
	int a[n];
	for(int i=0; i < n; i++){
	    scanf("%d", &a[i]);
	}
	SelectionSort(a, n);
	for(int i=0; i < n; i++){
	    printf("%d ", a[i]);
	}
	return 0;
}