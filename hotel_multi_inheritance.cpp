#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class h1
{
protected:
char cn[40],add[60],cno[12];
public:
void datah1()
{
cout<<"Enter customer name, address and contact No. : ";
cin>>cn>>add>>cno;
}
void dish1()
{
cout<<"\nName : "<<cn<<"\nAddress : "<<add<<"\nContact No. : "<<cno;
}
};
class h2
{
protected:
int rty;
public:
void datah2()
{
cout<<"\n1.Suit\t2.Royal\t3.AC\t4.Non AC";
cout<<"\nSelect Room Type : ";
cin>>rty;
}
};
class h3 : public h1, public h2
{
protected:
long rch,sd,oth,tax,tot,wtax;
public:
void datah3()
{
cout<<"\nEnter Stay Days, Other Charges :";
cin>>sd>>oth;
if (rty ==1)
{
rch=5000;
}
else if(rty==2)
{
rch=10000;
}
else if(rty==3)
{
rch=3000;
}
else if(rty==4)
{
rch=1000;
}
tot=sd*rch+oth;
tax=tot*8/100;
wtax=tot+tax;
}
void dish3()
{
cout<<"\nStay Days : "<<sd<<"\nOther Charge : "<<oth<<"\nRoom Charge : "<<rch<<"\nTotal = "<<tot<<"\nTax = "<<tax<<"\nTotal with Tax = "<<wtax;
}
};
int main()
{
h3 o;
system("cls");
o.h1::datah1();
o.h2::datah2();
o.datah3();
system("cls");
o.h1::dish1();
o.dish3();
getch();
}
