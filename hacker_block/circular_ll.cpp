#include<iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
node * create_ll()
{
    node * head=NULL;
    head=new node;
    int data;
    cin>>data;
    head->data=data;
    head->next=NULL;
    cin>>data;
    if(data==-1)
    {
        return head;
    }
    
    node* it=head;
    
    while(data!=-1)
    {
        node*temp=new node;
       
        temp->data=data;
        temp->next=NULL;
        it->next=temp;
        it=it->next;
         cin>>data;
        
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
	//cout<<"END";
	
}
node * circular(node *head)
{
	node *temp=head;
	int a[1000];
	int i=0;
	a[i]=temp->data;
	i++;
	
	while((temp->next)->data!=-1)
	{
		int flag=1;
		int m=temp->next->data;
		for(int j=0;j<i;j++)
		{
			if(a[j]==m)
			{
				flag=0;
				temp->next==NULL;
				break;
			}
		}
		if(flag==0)
		{
			break;
		}
		a[i]=m;
		i++;
		temp=temp->next;
		
	}
	
	temp->next=NULL;
	return head;
}
int main() {
    node* head=NULL;
    head=create_ll();
    print_ll(head);
    head=circular(head);
      print_ll(head);
	return 0;
}
