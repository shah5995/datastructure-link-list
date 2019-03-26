#include<iostream>
using namespace std;
class node
{
    
   
    public:
    	 node *next;
    	 int data;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
node * create_LL(int n)
{
    if(n==0)
    {
        return NULL;
    }
    int data;
    cin>>data;
    node * root=new node(data);
    root->next=create_LL(n-1);
    return root;
    
}
void print_LL(node * root)
{
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
    cout<<endl;
    return ;
    
}
node * merge(node * root1,node *root2)
{
	node * root=NULL;
	node *temp=NULL;
	if(root1==NULL&&root2==NULL)
	{
		return NULL;
	}
	if(root1==NULL)
	{
		return root2;
	}
	if(root2==NULL)
	{
		return root1;
	}
	int data;
		if(root1->data>root2->data)
		{
			data=root2->data;
			root=new node(data);
			temp=root;
			root2=root2->next;
		}
		else
		{
			data=root1->data;
			root=new node(data);
			temp=root;
			root1=root1->next;
		}
	
	
	
	
	while(root1!=NULL&&root2!=NULL)
	{
		int data;
		if(root1->data>root2->data)
		{
			data=root2->data;
			temp->next=new node(data);
			temp=temp->next;
			root2=root2->next;
		}
		else
		{data=root1->data;
			temp->next=new node(data);
			temp=temp->next;
			root1=root1->next;
			
		}
	}
	if(root1==NULL)
	{
		temp->next=root2;
	}
	if(root2==NULL)
	{
		temp->next=root1;
	}
	return root;
}
int main()
{
	int n1,n2;
	node*root1=NULL;
	node *root2=NULL;
	int t;
	cin>>t;
	while(t--)
	{
			cin>>n1;
	
	root1=create_LL(n1);
	cin>>n2;
	root2=create_LL(n2);
	node * root3=NULL;
	root3=merge(root1,root2);
	print_LL(root3);
		
	}
	
}
