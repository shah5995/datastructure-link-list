#include<iostream>
using namespace std;
class array{
	int m[5];
	public:
	array(int *s)
	{
		for(int i=0;i<5;i++)
		{
			m[i]=s[i]+10;
		}
	}
	int operator [] (int k)
	{
		cout<<"operator overloaded";
		return m[k];
	}
};
int main()
{
	int x[5]={0,1,2,3,4};
	array a(x);
	int m[5];
	for(int i=0;i<5;i++)
	{
		cout<<a.operator [](i)<<endl;
	}
	cout<<a[4];
}
