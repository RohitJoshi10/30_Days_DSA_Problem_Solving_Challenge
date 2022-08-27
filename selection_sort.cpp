#include <iostream>
using namespace std;

// // this is the iterative approach for the the particular question
// void selection_sort(int a[], int n)
// {
//     for(int i = 0 ;i<n-1;i++)
//     {
//         int min_idx = i;
//         for(int j = i+1;j<n;j++)
//         {
//             if(a[min_idx]>a[j])
//             {
//                 min_idx = j;
//             }
//         }
//         if(i!=min_idx)
//         {
//             swap(a[i],a[min_idx]);
//         }
//     }
// }

void selection_sort(int a[],int n)
{
    if(n==0||n==1)
        return;
    int min_indx = 0;
    for(int i = 1;i<n;i++)
    {
        if(a[min_indx]>a[i])
        {
            min_indx = i;
        }
    }
    swap(a[min_indx],a[0]);
    selection_sort(a+1,n-1);
}
void print(int a[], int n)
{
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {-2, 3, 5, 0, 67, 12, 4, -22};
    int n = sizeof(a) / sizeof(a[0]);
    print(a, n);
    selection_sort(a, n);
    print(a, n);
    return 0;
}  