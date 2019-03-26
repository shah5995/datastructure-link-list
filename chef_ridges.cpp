#include<iostream>
using namespace std;
#include<cmath>
int find(int n)
{
	if (n==1)
	{
	return 1;	
	}
	
	if(n==2)
	{
		return 1;
	}
	return (find(n-1)+2*find(n-2));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x=find(n);
		int y=pow(2,n);
		cout<<x<<" "<<y<<endl;
	}
}
