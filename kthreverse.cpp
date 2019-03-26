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
node * find_root(int a,node *root)
{

	a--;
//	cout<<"hello";
	while(a!=0)
	{
		root=root->next;
		a--;
	}
//	cout<<"s";
//cout<<root->data;
	return root;
}
void swap(int i,int j,node *root)
{
	node *temp1=find_root(i,root);//cout<<temp1->data;
	node *temp2=find_root(j,root);//cout<<temp2->data<<j;
	int d=temp1->data;
	temp1->data=temp2->data;
	temp2->data=d;
	
}

node * k_reverse(node *root,int n,int k)
{
	if(root==NULL)
	{
		return NULL;
	}
	for(int i=1;i<=k/2;i++)
	{
		swap(i,k-i+1,root);
	}
	node *temp=root;
	for(int i=1;i<=k-1;i++)
	{
		temp=temp->next;
		
	}
	temp->next=k_reverse(temp->next,n,k);
	return root;
}
int main()
{
	int n,k;
	cin>>n>>k;
	node *root=NULL;
	root=create_LL(n);
//	print_LL(root);
	root=k_reverse(root,n,k);
	print_LL(root);
	
}
