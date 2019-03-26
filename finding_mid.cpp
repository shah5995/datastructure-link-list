#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;

};
node * createll()
{
	int data;
	node * head=new node;
	cout<<"enter the data  ";
	cin>>data;
	if(data==-1)
	{
		head->data=0;
		head->next=NULL;
		head = NULL;
		return head;
	}
	
	head->data=data;
    head->next=NULL;
    node *it = head;
    cout<<"enter the data  ";
    cin>>data;
    while(data!=-1)
    {
    	cout<<"shah";
    	node *temp =new node;
    	temp->data=data;
    	temp->next=NULL;
    	it->next=temp;
    	it=it->next;
    		cout<<"enter the data  ";
    	cin>>data;
	}
	return head;
}
int  print( node *temp)
{    int c=0;
	while(temp->next!=0)
	{
		cout<<temp->data<<"--->  ";
		temp=temp->next;
		c++;
	}
	cout<<temp->data;
	c++;
	return c;
}
node * find_mid(node* head)
{
	node*temp1=head;
	node*temp2=temp1;
	while(temp2!=NULL)
	{
		if(temp2->next==NULL)
		{
			return temp1;
		}
		temp1=temp1->next;
		
		temp2=temp2->next->next;
	}
	return temp1;
}
int main()
{
	node *head=NULL;
	head=createll();
	print(head);
	node *temp=find_mid(head);
	cout<<endl<<temp->data;
}
