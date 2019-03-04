#include"iostream"
#include"conio.h"
#include<stdlib.h>
using namespace std;
class bill1
{
protected:
char cn[40],dt[10];
long bno;
public:
void info()
{
cout<<"enter bill no., customer name and date : ";
cin>>bno>>cn>>dt;
}
void dis1()
{
cout<<"\nbill no. : "<<bno<<"\t\t\t"<<"date : "<<dt<<"\nname : "<<cn;
}
};
class bill2
{
protected:
int ch;
public:
void cho()
{
cout<<"\nenter total no. of items to make bill : ";
cin>>ch;
}
};
class bill3: public bill1, public bill2
{
protected:
long q[20],p[20],tp[20],i,tot;
char in[10][10];
public:
bill3()
{
tot=0;
}
void data()
{
for(i=1;i<=ch;i++)
{
cout<<"\nenter item name, qty. and price : ";
cin>>in[i]>>q[i]>>p[i];
tp[i]=q[i]*p[i];
tot=tot+tp[i];
}
}
void dis2()
{
cout<<"\n\nitem\tqty.\tprice\ttotal";
for(i=1;i<=ch;i++)
{
cout<<"\n"<<in[i]<<"\t"<<q[i]<<"\t"<<p[i]<<"\t"<<tp[i];
}
cout<<"\n\ntotal = "<<tot;
}
};
int main()
{
bill3 o;
system("cls");
o.bill1::info();
o.bill2::cho();
o.data();
system("cls");
o.bill1::dis1();
o.dis2();
getch();
}
