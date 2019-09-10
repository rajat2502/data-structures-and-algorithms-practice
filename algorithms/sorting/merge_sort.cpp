#include <iostream>
using namespace std;

void merge(int *l,int *r,int *a, int nl, int nr){
    int i=0, j=0, k=0;
    while(i<nl && j<nr){
        if(l[i]<r[j]){
            a[k] = l[i];
            k++;
            i++;
        }
        else{
            a[k] = r[j];
            k++;
            j++;
        }
    }
    while(i<nl){
        a[k] = l[i];
        k++;
        i++;
    }
    while(j<nr){
        a[k] = r[j];
        k++;
        j++;
    }
}

void mergeSort(int *a, int n){
    if(n<2) return;
    int mid = n/2;
    int *l, *r, i;
    l = (int*)malloc(mid*sizeof(int));
    r = (int*)malloc((n-mid)*sizeof(int));
    for(i=0; i<mid; i++) l[i] = a[i];
    for(i=mid; i<n; i++) r[i-mid] = a[i];
    mergeSort(l, mid);
    mergeSort(r, n-mid);
    merge(l, r, a, mid, n-mid);
    free(l);
    free(r);
}

int main() {
	int n, i;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++) cin>>a[i];
	mergeSort(a, n);
	for(i=0; i<n; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}