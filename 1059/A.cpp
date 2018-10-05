#include<iostream>
#include<algorithm>
using namespace std;

struct cust{
  int ti,li;  
};

bool comp(cust a,cust b)
{
    return a.ti<b.ti;
}

int main()
{
    int n,l,a;
    cin>>n>>l>>a;
    if(n==0)
    {
     cout<<l/a; return 0;   
    }
    cust list[n];
    for(int i=0; i<n; i++)
    {
        cin>>list[i].ti>>list[i].li;
    }
    sort(list,list+n,comp);
    int c=0;
    int t;
    for(int i=0; i<n-1; i++)
    {   t=list[i+1].ti-list[i].ti-list[i].li;
        if(t>=a)
        {
            c=c+t/a;
        }
    }
    
    t=l-list[n-1].ti-list[n-1].li;
    //cout<<"t="<<t<<endl;
    c=c+t/a;
    cout<<c;
    return 0;
}
