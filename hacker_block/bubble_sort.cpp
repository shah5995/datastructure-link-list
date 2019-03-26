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
//	cout<<"hello";
	while(a!=0)
	{
		root=root->next;
		a--;
	}
//	cout<<"s";
	return root;
}
void swap(node *temp1,node *temp2,node * temp)
{
	while(temp->next!=temp1)
	{
		temp=temp->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	temp->next=temp2;
}
node *swap(node *temp1,node *temp2,int a)
{
	node *root=temp2;
	temp1->next=temp2->next;
	root->next=temp1;
	return root;
}
void bubble_sort(node **root,int n)
{
	node * temp=*root;
	for(int i=0;i<n;i++)
	{
	//	cout<<"shah";
		for(int j=0;j<n-i-1;j++)
		{
		   if(j==0)
		   {
		   	if(temp->data>temp->next->data)
		   	{
		   		
		   	*root=swap(temp,temp->next,0);
		   	temp=*root;
			   }
		   }
		   else
		   {
		  // 	cout<<"s";
		   	node * temp1 = NULL;
		   	temp1=find_root(j,temp);
		  // 	cout<<"hello";
		   	if(temp1->data > (temp1->next)->data)
		   	swap(temp1,temp1->next,temp);
		   }
		//   print_LL(temp);
			
		}
		
	}
}
int main() {
    int n;
    cin>>n;
    node *root=NULL;
    root=create_LL(n);
   // print_LL(root);
    bubble_sort(&root,n);
    print_LL(root);
	return 0;
}
