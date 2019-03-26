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
	//cout<<"enter the data  ";
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
    //cout<<"enter the data  ";
    cin>>data;
    while(data!=-1)
    {
    //	cout<<"shah";
    	node *temp =new node;
    	temp->data=data;
    	temp->next=NULL;
    	it->next=temp;
    	it=it->next;
    //		cout<<"enter the data  ";
    	cin>>data;
	}
	return head;
}
int  print( node *temp)
{    int c=0;
	while(temp->next!=0)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
		c++;
	}
	cout<<temp->data;
	c++;
	return c;
}
node * odd(node*head)
{
		node *temp=head;
	node * odd_head=head;
node *even_head=NULL;
	if(temp->next==NULL||(temp->next)->next==NULL)
	{
		return(head);
	}
	even_head->data=temp->next->data;
	even_head->next=NULL;
	node * odd_p=odd_head;
	node * even_p=even_head;
	temp=temp->next;
	temp=temp->next;
	
	int c=3;
	while(temp!=NULL)
	{
		node *next=new node;
		next->data=temp->data;
		next->next=NULL;
		if(c%2!=0)
		{
		odd_p->next=next;
		odd_p=odd_p->next;
		}
		else
		{
			even_p->next=next;
			even_p=even_p->next;
		}
		temp=temp->next;
		c++;
	}
	odd_p->next=even_head;
	return(odd_head);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
	node * head=NULL;
	head=createll();
	//print(head);
	
	   node *head1=NULL;
	head1=odd(head);
	print(head1);
}}
