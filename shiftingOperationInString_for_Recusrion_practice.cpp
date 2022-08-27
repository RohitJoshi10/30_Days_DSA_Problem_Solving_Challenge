#include<iostream>
using namespace std;
int main()
{ 
    
    int n;
    cin>>n;
    char a[n];
    // for(int i = 0;i<n;i++)
    // {
        cin>>a;
    // }

cout<<"Enter the element you want to enter : ";
   char ele;
   cin>>ele;
   n = n+1;
   for(int i = n-1;i>=0;i--)
   {
     a[i+1] = a[i];
   }
   a[0] = ele;
   for(int i = 0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
    return 0;
}