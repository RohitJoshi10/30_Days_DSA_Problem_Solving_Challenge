
// #include <vector>
// using namespace std;
// template<typename T>
// class Tree
// {
// public:
//     T data;
//     vector<Tree<T> *> children;
// };

#include<iostream>
#include"Treenode.h"
void printTree(Treenode<int> *root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" : ";
    for(int i = 0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i = 0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
Treenode<int> *take_input(Treenode<int> *root)
{
    int n;
    cout<<"Enter how many children you want to enter : ";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int element ;
        cout<<"Enter the element : ";
        cin>>element;
        Treenode<int> *p1 = new Treenode<int>(element);
        root->children.push_back(p1);
       
    }
    return root;
}
int main()
{
    Treenode<int> * root = new Treenode<int>(23);
    //  Treenode<int> * n1 = new Treenode<int>(3);
    //   Treenode<int> * n2 = new Treenode<int>(13);
    //   root->children.push_back(n1);
    //  root->children.push_back(n2);
     root = take_input(root);
     printTree(root);
    return 0;
}