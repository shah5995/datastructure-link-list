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
		cout<<temp->data<<"--->";
		temp=temp->next;
		c++;
	}
	cout<<temp->data;
	c++;
	return c;
}
node* swap_self(node * head,int a,int b)
{
	node *temp2=head;
	while(--b)
	{
		temp2=temp2->next;
	}
	node* temp1=head;
	while(--a)
	{
		temp1=temp1->next;
	}
	node * tempa=temp1->next;
		node * tempb=temp2->next;
	node* an=temp2->next->next;
        temp1->next=tempb;
        tempb->next=tempa->next;
       
        tempa->next=an;
        temp2->next=tempa;


	
	return head;
}
int main()
{
	node* head;
	head=createll();
	int n=print(head);
	int a,b;
	cout<<"enter the position which you want to swap   ";
	cin>>a>>b;
	head=swap(head,a,b);
	n=print(head);
}
