#include <iostream>
#include <cmath>
using namespace std;
int main (){
	
	int s, h, m, sh, hm;
	cin>>s;
	sh=s%60;
	m=(s-sh)/60;
	hm=m%60;
	h=(m-hm)/60;
	cout<<h<<" ore, "<<hm<<" minute si "<<sh<<" secunde";
	
	return 0;
}
