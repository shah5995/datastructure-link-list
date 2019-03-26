#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
};
node *create_linklist()
{
	node *head=new node;
	node *temp;
	int data;
	cout<<"ENter the data";
	cin>>data;

	node *temp2=new node;
	temp2->data=data;
	temp2->next=NULL;
	head=temp2;
	temp=temp2;
	while(temp->data!=-1)
	{
		node *temp2 = new node;
		
		cout<<endl<<"enter the data  ";
		cin>>temp2->data;
		
		temp->next=temp2;
		temp=temp->next;
	}
	
	return head;
	
}
void print(node *temp);
void createll(node *head)
{
node *temp=head;
node temp2;
cout<<"enter the data  ";
cin>>temp2.data;
temp2.next=NULL;
head=&temp2;
temp=&temp2;
while(temp->data!=-1)
{
	node *temp2=new node;
	cout<<"enter the data  ";
cin>>temp2->data;
temp2->next=NULL;
temp->next=temp2;
temp=temp->next;	
}
print(head);
}
void print(node *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	//cout<<temp->data;
}
int main()
{
	node *head;
	head = create_linklist();
	print(head);
	
}
