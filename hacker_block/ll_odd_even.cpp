#include<iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
node * create_ll(int n)
{
    node * head=NULL;
    head=new node;
    int data;
    cin>>data;
    head->data=data;
    head->next=NULL;
    if(n==1)
    {
        return head;
    }
    n--;
    node* it=head;
    while(n)
    {
        node*temp=new node;
        cin>>data;
        temp->data=data;
        temp->next=NULL;
        it->next=temp;
        it=it->next;
        n--;
    }
    
    
    return head;
}
void print_ll(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<"END";
	
}
node * check(node * head)
{
	node *temp=head;
	node* tempodd=NULL;
	node* tempeven=NULL;
	while(temp!=NULL)
	{
		node *temp1=new node;
		temp1=temp->data;
		temp1->next=NULL;
		if(temp->data%2==0)
		{
		 tempeven->next=temp1;
		  tempeven= tempeven->next;
		}
		else
		{
			tempodd
		}
		
		temp=temp->next;
	}
	
}

int main() {
    node* head=NULL;
    int n;
    cin>>n;
    head=create_ll(n);
    print_ll(head);
    node * head2=check(head);
	print_ll(head2);
	return 0;
}
