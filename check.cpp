#include<iostream>
using namespace std;
void call(int n)
{
	int i=5;
	while(n>0)
	{
		int i;
		cout<<&i<<endl;
		n--;
	}
}
int main()
{
	call(5);
}
