#include"iostream"
#include"conio.h"
using namespace std;
class rev
{
protected:
int n,r;
public:
virtual void val()
{
cout<<"Enter No. : ";
cin>>n;
}
virtual void cal()
{
while(n>0)
{
r=n%10;
cout<<r;
n=n/10;
}
}
};
class palin: public  rev
{
protected:
int n1,r1,t;
public:
palin()
{
r1=0;
}
void val()
{
cout<<"\nEnter No. : ";
cin>>n1;
}
void cal()
{
t=n1;
while(t!=0)
{
r1=r1*10;
r1=r1+t%10;
t=t/10;
}
if(n1==r1)
cout<<"\npalindrom no.";
else
cout<<"\nnot a palindrome no.";
}
};
int main()
{
rev *o1,*o2;
o1=new rev();
o1->val();
o1->cal();
o2=new palin();
o2->val();
o2->cal();
getch();
}
