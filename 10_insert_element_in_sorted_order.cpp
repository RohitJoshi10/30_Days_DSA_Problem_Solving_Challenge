#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *tail = NULL;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *tail = NULL;
Node *insert_node(Node *head)
{
    int value;
    cout << "Enter the value you want to insert : ";
    cin >> value;
    while (value != -1)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cout << "Enter the value you want to insert : ";
        cin >> value;
    }
    return head;
}
void print(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
Node *insert_in_corect_order(Node *head)
{
    int value;
    cout << "Enter the value you want to insert : ";
    cin >> value;
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        if (head->data == value)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            Node *p = head;
            while (p->next != NULL)
            {
                if (p->data < value < p->next->data)
                {
                    newnode->next = p;
                    p->next = newnode;
                }
                p = p->next;
            }
            if (value > p->data)
            {
                p->next = newnode;
            }
        }
    }
    return head;
}
int main()
{
    Node *head = NULL;
   // head = insert_node(head);
   // print(head);
    head = insert_in_corect_order(head);
    head = insert_in_corect_order(head);
    head = insert_in_corect_order(head);
    head = insert_in_corect_order(head);
    print(head);
    return 0;
}