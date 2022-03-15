#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000

void heapify(int arr[], int n, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
        heapify(arr, n, largest); 
    } 
} 
void heapSort(int arr[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
    for (int i=n-1; i>0; i--) 
    { 
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0); 
    } 
} 
void sapxep(int a[]){
	clock_t start, end;
	start = clock();
    heapSort(a,MAX);
    end = clock();
    cout<<(double)(end - start)<<endl;
}
int main(){
	int *a=new int[MAX];
	ifstream file ;
	file.open("bodulieu1.txt");
	cout<<"HeapSort"<<endl; 
	for(int i=1;i<=10;i++){
		for (int j=0;j<MAX;j++){
		file>>a[j];
		}
		cout<<"test "<<i<<": ";
		sapxep(a);
	}
	file.close();
    return 0;
}
