#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
void quickSort(int arr[], int low, int high);
void sapxep(int a[]){
	clock_t start, end;
	start = clock();
    quickSort(a, 0, MAX-1);
    end = clock();
    cout<<(double)(end - start)<<endl;
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
       int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main(){
	int *a=new int[MAX];
	ifstream file ;
	file.open("bodulieu1.txt");
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

