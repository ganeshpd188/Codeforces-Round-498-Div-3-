#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int64_t n,i,j,max=0,sum1,sum2;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++)
        cin>>v[i];
    i=0;
    j=n-1;
    max=0;
    sum1=v[0],sum2=v[n-1];
    while(i<j)
    {
        if(sum1>sum2)
            {
                j--;
                sum2+=v[j];
            }
        else if(sum1<sum2)
            {
                i++;
                sum1+=v[i];
            }
        else if(sum1==sum2)
        {
            max=sum1;
             i++;
            j--;
             sum1+=v[i];
            sum2+=v[j];

        }
    }
    cout<<max;
    return 0;
}
