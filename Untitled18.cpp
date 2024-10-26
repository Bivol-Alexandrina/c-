# include <fstream>
using namespace std;
 int i=0;
	
int sum(int n) {
	int s=0;
    while (n!=0) {
        s+=n%10; 
        n /= 10;      
    }
    
    return s;}
int main(){
	ifstream fin ("f.in");
	ofstream fout ("f.out");
    int c, cr;
	fin>>cr>>c;
    if(sum(c)%sum(cr)==0) fout<<"acceptat"; else fout<<"respins";
    
    fin.close();
    fout.close();    
	return 0;
	}
