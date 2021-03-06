#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000

void merge(int a[], int left, int mid, int right)
{
    int *temp = new int[right - left + 1];
    int m;
    int i = left;
    int j = mid + 1;
    m = 0;
    while (!(i > mid && j > right))
    {
        if ((i <= mid && j <= right && a[i] < a[j]) || j > right)
            temp[m++] = a[i++];
        else
            temp[m++] = a[j++];
    }
    for (i = 0; i < m; i++)
        a[left + i] = temp[i];
    delete temp;
}

void merge_sort(int a[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

void sapxep(int a[]){
	clock_t start, end;
	start = clock();
    merge_sort(a, 0, 999999);
    end = clock();
    cout<<(double)(end - start)<<endl;
}
int main(){
	int *a=new int[MAX];
	ifstream file ;
	file.open("bodulieu.txt");
	cout<<"MergeSort"<<endl; 
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
