#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }   
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<ar[i]<<"  "<<i;
    }
    return 0;
}
