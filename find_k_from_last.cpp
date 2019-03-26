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
node * find_K(node * temp,int k)
{
	if(temp->next==NULL)
	{
		return NULL;
	}
	
	static int i=k;
	//i++;
	//static int r=0;
	//r=i;
	node *temp2=find_K(temp->next,k);
	
	i--;
	if(i==0)
	{
		return temp;
	}
	return temp2;
	
}
int main()
{
	node *head=NULL;
	head=createll();
	print(head);
	int n;
	cout<<"find the position to be found";
	cin>>n;
	node * ans=find_K(head,n+1);
	cout<<endl<<ans->data;
	
//	node *temp=find_mid(head);
//	cout<<endl<<temp->data;
}
