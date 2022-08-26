#include<iostream>
using namespace std;
class Node
{
    
    public:
    int val;
    Node *next,*tail;
    Node(int value)
    {
        val  = value;
        next = NULL;
    }
};
Node *head = NULL,*tail = NULL;
class stack
{
    int data;
    public:
    void push(int info)
    {
        Node *newnode = new Node(info);
        if(head==NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            Node *p = head;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = newnode;
            tail = newnode;
        }
    }
    int pop()
    {
        if(tail==NULL)
        {
            cout<<"STACK IS EMPTY"<<endl;
            return -1;
        }
        else if(tail==head)
        {

           tail = NULL;
           head = NULL;
            
        }
        Node *p = head;
        while(p->next!=tail)
        {
            p = p->next;
        }
        cout<<tail->val<<" ";
        p->next = NULL;
       //delete tail;
        tail = p;

    }
    void top()
    {
        cout<<"Top : "<<tail->val<<endl;
    } 
    void print()
    {
        Node *p = head;
        
        while (p!=NULL)
        {
            cout<<p->val<<" ";
            p = p->next;
        }
        
    }
};
int main()
{
    stack s;
    s.push(12);
    s.push(11);
    s.push(10);
    cout<<s.pop();
    cout<<s.pop();
    cout<<s.pop();
    
    
    return 0;
}