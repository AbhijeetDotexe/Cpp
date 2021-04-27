//BST implementaion using linked list
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	 node*left;
	 node*right;
	
};
int isIdentical(node* root1, node* root2) 
{ 
    
    if (root1 == NULL && root2 == NULL) 
        return 1; 
   
    else if (root1 != NULL && root2 == NULL) 
        return 0; 
    else if (root1 == NULL && root2 != NULL) 
        return 0; 
    else {  
        if (root1->data == root2->data && isIdentical(root1->left, root2->left) 
            && isIdentical(root1->right, root2->right)) 
            return 1; 
        else
            return 0; 
    } 
} 
void mirror(struct node* node)  
{ 
    if (node == NULL)  
        return;  
    else
    { 
        struct node* temp; 
          
        
        mirror(node->left); 
        mirror(node->right); 
      
        
        temp     = node->left; 
        node->left = node->right; 
        node->right = temp; 
    } 
}
int height(node* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        
        int lheight = height(node->left);  
        int rheight = height(node->right);  
  
        
        if (lheight > rheight)  
            return(lheight + 1);  
        else return(rheight + 1);  
    }  
}  
void printGivenLevel(node* root, int level)  
{  
    if (root == NULL)  
        return;  
    if (level == 1)  
        cout << root->data << " ";  
    else if (level > 1)  
    {  
        printGivenLevel(root->left, level-1);  
        printGivenLevel(root->right, level-1);  
    }  
}
void printLevelOrder(node* root)  
{  
    int h = height(root);  
    int i;  
    for (i = 1; i <= h; i++)  
        printGivenLevel(root, i);  
}
void inorder( node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        cout<<root->data<<" "; 
        inorder(root->right); 
    } 
} 
void preorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        cout<<root->data<<" ";
		inorder(root->left); 
        inorder(root->right); 
    } 
} 
void postorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        inorder(root->right); 
        cout<<root->data<<" ";
	
	} 
} 
 node *newNode(int item) 
{ 
     node *temp =  new node; 
    temp->data = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

 node* insert( node* node, int data) 
{ 
    if (node == NULL) return newNode(data); 
    if (data < node->data) 
        node->left  = insert(node->left, data); 
    else if (data > node->data) 
        node->right = insert(node->right, data);    
    return node; 
} 

struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
  
    while (current && current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
struct node* deleteNode(struct node* root, int data) 
{ 
    if (root == NULL) return root; 
    if (data < root->data) 
        root->left = deleteNode(root->left, data); 
  
    else if (data > root->data) 
        root->right = deleteNode(root->right, data); 
  
    else
    { 
        if (root->left == NULL) 
        { 
            struct node *temp = root->right; 
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct node *temp = root->left; 
            free(root); 
            return temp; 
        } 
  
        struct node* temp = minValueNode(root->right); 
        root->data = temp->data; 
  
        root->right = deleteNode(root->right, temp->data); 
    } 
    return root; 
} 
int main()
{
	int ch;
	int val,j;
	node*root=NULL;
	node*root2=NULL;
	node*root3=NULL;
	lb:
	cout<<"\nPRESS 1 TO INSERT INTO BST";
	cout<<"\nPRESS 2 TO DELETE FROM BST";
	cout<<"\nPRESS 3 FOR0 INORDER TRAVERSAL";
	cout<<"\nPRESS 4 FOR PRE ORDER TRAVERSAL";
	cout<<"\nPRESS 5 FOR POST ORDER TRAVERSAL";
	cout<<"\nPRESS 6 FOR LEVEL ORDER TRAVERSAL";
	cout<<"\nPRESS 7 TO GET HEIGHT OF THE TREE";
	cout<<"\nPRESS 8 TO CREATE A MIRROR";
	cout<<"\nPRESS 0 TO EXIT";
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"\nENTER ELEMENT TO BE INSERTED";
		cin>>val;
	    root=insert(root,val);
	    break;
		case 2:	
		cout<<"\nENTER THE ELEMENT TO BE DELETED";
     		cin>>val;
 	     	root2=deleteNode(root,val);
            if(root2==NULL)
			cout<<"THE TREE IS EMPTY";
			else
			cout<<"THE DELETED ELEMENT IS "<<root2->data;
	 						break;
		case 3:	inorder(root);break;
        case 4:preorder(root);break;
		case 5:postorder(root);break;
		case 6:printLevelOrder(root);break; 
		case 7:  j=height(root);
                cout<<"\nTHE HEIGHT OF THE TREE IS "<<j;break;		
		case 8:mirror(root);break;    
       }
       if(ch!=0)
       goto lb;
	return 0;
	
	}


