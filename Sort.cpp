#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
 int a[n],k;
 for( i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cin>>k;
sort (a,a+n);
 for( i=0;i<n;i++)
 {
 cout << a[i];
 }
 return 0;
}
    
