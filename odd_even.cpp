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
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	;
	
}
node * odd(node*head)
{
		node *temp=head;
	node * odd_head=temp;
	node * even_head=temp->next;
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

int main() {
    node* head=NULL;
    int n;
    cin>>n;
    head=create_ll(n);
    print_ll(head);
    node *head1=NULL;
	head1=odd(head);
	print_ll(head1);
    
  
	return 0;
}
