#include<fstream>
#include<iostream>
using namespace std;

    int i=0, j=0;
int main(){
	
	ifstream fin("fis.in");
	ofstream fout("fis.out");
	
	int n;
	cin>>n;
	fin>>n;
	int a[n][2];
	
	for(int i=0; i<=n; i++){
		
		for(int j=0;j<=2;i++)
		cin>>a[i][j];
		
	}
	for(int i=0; i<=n; i++){
		
		for(int j=0;j<=2;i++)
		cout<<a[i][j];
		
	}
	
	
	
	return 0;
}
