#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int64_t n,k,i,j,sum=0;
    cin>>n>>k;
    vector<int64_t>v(n);
    vector<int64_t>y(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        y[i]=v[i];
    }
    sort(y.begin(),y.end());
    j=1;
    vector<int64_t>pos;
    for(i=n-1;i>=0;i--)
    {
        if(j<=k)
        {
            sum+=y[i];
            j++;
        }
        else
            break;
    }
    cout<<sum<<endl;
    int cont=0;
	int lim=n-k;
	for (i = 0; i < n; ++i)
	{
		cont++;
		for (j = n-1; j >= lim; --j)
		{
			if(v[i]==y[j]){
				if(k!=1){
					y[j]=-1;
					cout<<cont<<" ";
					cont=0;
					k--;
				}
				break;
			}
		}

	}
	if(k==1){
		cout<<cont<<endl;
	}

     return 0;
}
