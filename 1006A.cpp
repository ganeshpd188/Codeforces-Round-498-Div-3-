#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int64_t n,i,k,j,max;
    cin>>n;
    vector<int64_t>a(n);
    vector<int64_t>b(n);
    for(i=0;i<n;i++)
    {
       cin>>a[i];
       if(a[i]%2==0)
        a[i]--;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<< " ";
    return 0;
}
