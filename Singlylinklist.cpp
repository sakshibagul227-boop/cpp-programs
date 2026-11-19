#include<iostream>
using namespace std;
struct node
{
    int PRN,data;
    char name[10];
    node*next;
};
class club
{
    public:
    node*nn,*temp,*temp1,*presi,*secr;
    club()
    {
        presi=secr=NULL;
    }
    void create();
    void display();
    void addpresi();
    void addsecr();
    void compute();
    };
void club::create()
{
    nn=new node;
    nn->next=NULL;
    cout<<"enter prn number:";
    cin>>nn->PRN;
    cout<<"enter the name of the student:";
    cin>>nn->name;
    if(presi==NULL)
    {
       presi=secr=nn; 
    }
    else{
        secr->next=nn;
        secr=nn;
    }
}
void club::addpresi()
{
    nn=new node;
    nn->next=NULL;
    cout<<"enter prn number:";
     cin>>nn->PRN;
    cout<<"enter the name of the student:";
        cin>>nn->name;
    nn->next=presi;
    presi=nn;
}
void club::addsecr()
{
    nn=new node;
    nn->next=NULL;
    cout<<"enter prn number:";
 cin>>nn->PRN;
    cout<<"enter the name of the student:";
        cin>>nn->name;
    secr->next=nn;
    secr=nn;
}
void club::compute()
{
    int count=0;
    temp=presi;
    while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
    cout<<"\ntotal no. of count:"<<count;
}
void club::display()
{
  temp=presi;
    while(temp!=NULL)
        {
            cout<<"\nPRN NO.:"<<temp->PRN;
            cout<<"\nname:"<<temp->name;
            temp=temp->next;
        }
}
int main()
{
    int n,i,choice;
    club b;
    cout<<"enter the total no. of student:";
    cin>>n;
    for(i=0;i<n;i++)
        {
            b.create();
        }
    cout<<"enter your choice:"
        <<"\n 1.add president"
        <<"\n 2.add secretory"
        <<"\n3.compute\n:";
    cin>>choice;
    switch(choice)
        {
            case 1:
            cout<<"\nadd president\n";
            b.addpresi();
            break;
            case 2:
            cout<<"\nadd secretory:\n";
            b.addsecr();
            break;
            case 3:
            b.compute();
            break;
        }
    cout<<"\n.......pinacle club......";
    b.display();
    

    
}
