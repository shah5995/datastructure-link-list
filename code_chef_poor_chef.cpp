#include<iostream>
using namespace std;
int a[100000];
int a2[100000];
int main()
{
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	

for(int i=1;i<=n;i++)
{
cin>>a[i];
} 

a2[1]=a[a[1]];
int m=0;
for(int i=1;i<=n;i++)
{
//	m=0;
	int r=a[a[i]];
	for(int j=1;j<i;j++)
	{
		if(a2[j]==r)
		{
			 m=1;
			cout<<"Truly Happy"<<endl;
			break;
		}
	}
	if(m==1)
	{
		break;
	}
	a2[i]=r;
}
if(m==0)
{
	cout<<"Poor chef"<<endl;
}

}

}
