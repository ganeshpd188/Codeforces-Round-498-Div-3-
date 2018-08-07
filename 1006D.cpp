#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int64_t n,i,cnt=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(int i=1 ; i<=n/2 ; i++)
    {
        if(a[i-1]==a[n-i] && b[i-1]!=b[n-i]){
			if(a[i-1] != b[i-1]) cnt++;
			if(a[i-1] != b[n-i]) cnt++;
		}
		else if(b[i-1]==b[n-i] && a[i-1]!=a[n-i]){
			cnt++;
		}
		else if(b[n-i]!=b[i-1] && a[n-i]!=a[i-1]){
			if(b[n-i] != a[i-1] && b[n-i] != a[n-i]) cnt++;
			if(b[i-1] != a[i-1] && b[i-1] != a[n-i]) cnt++;
		}
	}
	if(n%2 && a[(n/2)] != b[(n/2)]) cnt++ ;
	cout<<cnt;
    return 0;
}
