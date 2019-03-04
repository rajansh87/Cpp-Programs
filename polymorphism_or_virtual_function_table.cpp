#include"iostream"
#include"conio.h"
using namespace std;
class tab
{
protected:
int a,b,c;
public:
virtual void val()
{
cout<<"enter no. : ";
cin>>a;
}
virtual void dis()
{
for(b=1;b<=10;b++)
{
c=a*b;
cout<<"\n"<<c;
}
}
};
class fact: public  tab
{
protected:
int x,y,z;
public:
fact()
{
z=1;
}
void val()
{
cout<<"\nenter no. to find factorial : ";
cin>>x;
}
void dis()
{
for(y=x;y>=1;y--)
{
z=z*y;
}
cout<<"\nfactorial = "<<z;
}
};
int main()
{
tab *o1,*o2;
o1=new tab();
o1->val();
o1->dis();
o2=new fact();
o2->val();
o2->dis();
getch();
}
