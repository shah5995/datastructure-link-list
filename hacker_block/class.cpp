#include<iostream>
using namespace std;
int find(int a[],int n,int m,int index)
{
    if(index==n+1)
    {
        return(-1);
    }
    int c=find(a,n,m,index+1);
    if( (c==-1)&& (a[index]== m))
    {
        return index;
    }
    return c;
}
int main() {
    int n;
    cin>>n;
    int a[10000];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    
    }
    int m;
    cin>>m;
    
    int ans= find(a,n,m,1);
    cout<<ans;
	return 0;
}
