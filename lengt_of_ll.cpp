#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;

};
node * createll()
{
	int data;
	cout<<"enter the data  ";
	cin>>data;
	node * head;
	head->data=data;
	head->next=NULL;
	
	
	node * it=head;
		cout<<endl<<"enter the data  ";
	cin>>data;
	
	while(data!=-1)
	{
		node * temp=new node;
		temp->data=it->data;
		temp->next=NULL;
		it->next=temp;
		it=it->next;
	
			cout<<endl<<"enter the data  ";
		cin>>it->data;
	}
	return head;
}

int  print( node *temp)
{    int c=0;
	while(temp!=0)
	{
		cout<<temp->data<<"--->  ";
		temp=temp->next;
		c++;
	}
	return c;
}

int main()
{
	node *head;
	head=createll();
	int n=print(head);
	cout<<n<<endl;
	
}
