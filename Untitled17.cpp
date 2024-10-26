#include <iostream>
#include <string>
using namespace std;

int ka(string a[],  string b )
{           int k=0;
	for (int i=0; i<=a.size(); i++ ){
		if (string a[i]=b) k++;
	}
	return k;
}

int main (){
	
	string a[10], b;
	cin>>a>>endl>>b;
	ka(a,b)	;
	cout<<k;
	return 0;
}
