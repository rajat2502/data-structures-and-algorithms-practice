#include <iostream>
using namespace std;

void BubbleSort(int a[], int n){
    int i, k;
    for(k=1; k<=n-1; k++){
       int flag = 0;
       for(i=0; i<=n-k-1; i++){
          if(a[i] > a[i+1]){
              int temp = a[i];
              a[i] = a[i+1];
              a[i+1] = temp;
              flag = 1;
          }
       }
       if(flag == 0) break;
    }
}

int main() {
	int n, i;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++){
	    scanf("%d", &a[i]);
	}
	BubbleSort(a, n);
	for(i=0; i<n; i++){
	    printf("%d ", a[i]);
	}
	return 0;
}