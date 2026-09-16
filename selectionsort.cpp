#include<iostream>
using namespace std;

int main()
{
    int n, i, j, min, temp;
    int A[10];

    cout<<"Enter number of students: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"Enter roll no.: ";
        cin>>A[i];
    }

    // Selection Sort
    for(i=0; i<n-1; i++)
    {
        min=i;

        for(j=i+1; j<n; j++)
        {
            if(A[j] < A[min])
            {
                min=j;
            }
        }

        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }

    cout<<"Sorted Roll Numbers are:"<<endl;

    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}