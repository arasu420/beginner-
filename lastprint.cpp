#include <iostream>
using namespace std;
int main()
{
    int i,n,len,l;
    string a;
    cin>>a;
    cin>>n;
    len=a.length();
    l=len-n;
    for(i=l;i<len;i++)
    {
        cout<<a[i];
    }
    return 0;
}
