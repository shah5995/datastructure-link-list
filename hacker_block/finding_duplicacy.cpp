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
int duplicate(node* head1,node *head2)
{
	node *temp1=head1;
	int a,flag;
	while(temp1!=NULL)
	{
		flag=1;
		 a=temp1->data;
	node *temp2=head2;
	while(temp2!=NULL)
	{
		if(a==temp2->data)
		{
			flag=0;
			break;
		}
		temp2=temp2->next;
	}
	if(flag==0)
	{
		break;
	}
		
		temp1=temp1->next;
		
	}
	if(flag==0)
	{
		return a;
	}
	return -1;
}

int main() {
    node* head1=NULL;
    int n1;
    cin>>n1;
    head1=create_ll(n1);
    //print_ll(head1);
    node *head2=NULL;
    int n2;
    cin>>n2;
    head2=create_ll(n2);
    //print_ll(head2);
    int ans=duplicate(head1,head2);
    cout<<endl<<ans;
	return 0;
}
