#include <iostream>
#include <cmath>
using namespace std;
int main (){
	
	int m, h, hm;
	cin>>m;
	hm=m%60;
	h=(m-h)/60;
	cout<<h<<" ore si "<<hm<<" minute";
	
	return 0;
}
