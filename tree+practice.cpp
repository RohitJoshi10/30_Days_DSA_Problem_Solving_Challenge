// 1. tree class
// 2. tree created using -> create tree method
//                       -> level order traversal
// 3. visit the content of tree using 4 traversal
//                       -> level order traversal
//                       -> Inorder traversal(recursion)
//                       -> preorder traversal(recursion)
//                       -> postorder traversal(recursion)
// implementation question -> count no of leaf node;
// homework -> Reverse level order traversal
//          -> all traversal using iteration method
//        


#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void preorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
     cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void levelorder(node *root)
{
    if(root==NULL)
    return;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
       if(temp==NULL)
       {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
       }
       else
       {
         cout<<temp->data<<" ";
        if(temp->left)
          q.push(temp->left);
        if(temp->right)
          q.push(temp->right);
       }
    }
}

node *buildTreeUsingLevelOrder(node *root)
{
    queue<node *> q;
    cout<<"Enter the data for root : ";
    int data;
    cin>>data;
    root->data = data;
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout<<"Enter the left for "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left = new node(leftdata);
        }


         cout<<"Enter the right for "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right = new node(rightdata);
        }
        return root;
    }
    

}

node *createTree(node *root)
{
    int data;
    cout<<"Enter the root data : ";
    cin>>data;

    printf("Enter the left child of %d : ",data);
    int leftchild;
    cin>>
    
}
int main()
{
    node *root = new node(0);
    node *n1 = new node(1);
    node *n2 = new node(2);
    node *n3 = new node(3);
    node *n4 = new node(4);
    node *n5 = new node(5);
    node *n6 = new node(6);
    
    root->left = n1;
    root->right = n4;
    n1->left = n2;
    n1->right = n3;
    n4->left = n5;
    n4->right = n6;

    cout<<"\nInorder Tranversal   : ";inorder(root);
    cout<<"\nPostorder Tranversal : ";postorder(root);
    cout<<"\nPreorder Tranversal  : ";preorder(root);
    cout<<"\nLevelorder Tranversal  : \n";
    levelorder(root);

    return 0;
}