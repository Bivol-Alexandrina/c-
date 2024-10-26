#include <iostream>
#include <cstring>

using namespace std;
int main (){
	
	char s[30];
	cin>>s;
	
	for(int i=0; i<strlen(s); i++)
	    {
	    	if(s[i]=='n'&&s[i+1]=='b'||s[i+1]=='p')
	    	{
	    		s[i]='m';
			}
		}
	
	
	cout<<s;
	return 0;
}
