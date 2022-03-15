#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
void quick_sort(int a[], int left, int right) {
    int i = left, j = right;
    int temp;
    int pivot = a[(left + right) / 2];
    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i <= j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    if (left < j) quick_sort(a, left, j);
    if (i < right) quick_sort(a, i, right);
}
void sapxep(int a[]){
	clock_t start, end;
	start = clock();
    quick_sort(a, 0, MAX-1);
    end = clock();
    cout<<(double)(end - start)<<endl;
}


int main(){
	int *a=new int[MAX];
	ifstream file ;
	file.open("bodulieu.txt");
	cout<<"QuickSort"<<endl; 
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


