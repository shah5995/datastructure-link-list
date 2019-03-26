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
void arrange(node *head)
{
	node*temp=head;
	node* head1=NULL;
	node* head2=NULL;
	node*temp1,*temp2;
	temp1=head1;
	temp2=head2;
	while(temp!=NULL)
	{
		if((temp->data)%2==0)
		{
			h->data=temp->data; 
		}
		else
		{
			head2->data=temp->data;
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
    node* head2= arrange(head);
 
	return 0;
}

