#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
void sapxep(int a[]){
	clock_t start, end;
	start = clock();
    sort(a, a+ MAX);
    end = clock();
    cout<<(double)(end - start)<<endl;
}
int main(){
	int *a=new int[MAX];
	ifstream file ;
	file.open("bodulieu1.txt");
	cout<<"Sort(C++)"<<endl; 
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

