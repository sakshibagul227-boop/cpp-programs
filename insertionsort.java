#include<iostream>
using namespace std;

int main()
{
    int n, i, j, key;
    int A[10];

    cout<<"Enter number of students: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"Enter roll no.: ";
        cin>>A[i];
    }

    // Insertion Sort
    for(i=1; i<n; i++)
    {
        key=A[i];
        j=i-1;

        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }

        A[j+1]=key;
    }

    cout<<"Sorted Roll Numbers are:"<<endl;

    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}