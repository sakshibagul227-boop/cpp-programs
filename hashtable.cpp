#include<iostream>
#include<string>
using namespace std;
struct rec
{
    int telno;
    string name;
};
class ht
{
    public:
   rec H1[10];
    int i;
    ht()
    {
        for(i=0;i<10;i++)
            {
        H1[i].telno=-1;
        H1[i].name="";
            }
    }
    void create()
    {
        int total=0,index;
        int tn,nh;
        string nm;
        cout<<"enter name:";
        cin>>nm;
        cout<<"enter teleno:";
        cin>>tn;
        for(i=0;nm[i]!='\0';i++)
            {
                total=total+nm[i];
            }
        index=total%10;
        for(i=0;i<10;i++)
            {
               nh=(index+i)%10;
                if(H1[nh].telno==-1)
                {
                 H1[nh].telno=tn;
                    H1[nh].name=nm;
                }
            }
    }
    void 
};
int main()
{
    ht h;
    h.create();
}
