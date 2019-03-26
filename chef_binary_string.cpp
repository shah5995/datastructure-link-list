#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int n;
	int q;
	cin>>n>>q;
	int a[100000];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	//int integer[100000];
	for(int i=1;i<=n;i++)
	{
		int r=a[i];
		int sum=0;
		int c=0;
		while(r>0)
		{
			sum=sum+(r%10)*pow(2,c);
			c++;
			r=r/10;
		}
		a[i]=sum;
		//cout<<a[i]<<" ";
	}
	//cout<<endl<<endl<<endl;*/
	while(q--)
	{
		int l,r,x;
		cin>>l>>r>>x;
		int intx,c=0;
		intx=0;
		while(x>0)
		{
			intx=intx+(x%10)*pow(2,c);
			c++;
			x=x/10;
		}
	//	cout<<intx<<endl;
		int max=-1000;
		int index=0;
		for(int i=l;i<=r;i++)
		{
			int p=a[i];
			 int ans=p ^ intx;
			 //cout<<ans<<endl;
			 if(ans>max)
			 {
			 	max=ans;
			 	index=i;
			 }
			
		}
		cout<<index<<endl;
	}
	
}

