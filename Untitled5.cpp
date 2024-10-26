# include <iostream> 
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b=a%100,m=b%10, c=(b-m)/10, n=(a-b)/100;
    cout<<m<<c<<n;
    
    return 0;
}

