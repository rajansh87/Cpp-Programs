#include"iostream"
#include"conio.h"
#include<stdlib.h>
using namespace std;
class hos1
{
protected:
char pn[40],dis[30],doc[40],dt[10],add[50],ph[10];
public:
void data()
{
cout<<"enter date, patient name, address and contact :";
cin>>dt>>pn>>add>>ph;
cout<<"\nenter disease : ";
cin>>dis;
}
void bill1()
{
cout<<"\ndate : "<<dt<<"\nname : "<<pn<<"\naddress : "<<add<<"\ncontact : "<<ph<<"disease : "<<dis;
}
};
class hos2
{
protected:
int sd,wrd,rn;
long rch,tot;
public:
void show()
{
cout<<"\n1. general\t2. private\t3. semi private";
}
void info()
{
cout<<"\nenter ward, room no. and stay days : ";
cin>>wrd>>rn>>sd;
if(wrd==1)
{
rch=800;
}
else if(wrd==2)
{
rch=2000;
}
else if(wrd==3)
{
rch=1500;
}
else
{
cout<<"\nward not available";
}
tot=rch*sd;
}
void bill2()
{
cout<<"\nward : "<<wrd<<"\nroom no. : "<<rn<<"\nstay days : "<<sd<<"\nroom charge :"<<rch;
}
};
class hos3:public hos1, public hos2
{
protected:
long df,mch,ot,icu,icusd,tax,oth,ftot,gt,icut;
public:
hos3()
{
icu=1000;
}
void cal()
{
cout<<"\nenter doctor's fees, medicine charge,icu stay days,operation charge and other :";
cin>>df>>mch>>icusd>>ot>>oth;
icut=icu*icusd;
gt=tot+df+mch+ot+icut+oth;
tax=gt*14/100;
ftot=gt+tax;
}
void bill3()
{
cout<<"\ndoctor's fees : "<<df<<"\nmedicine charge : "<<mch<<"\noperation charge : "<<ot<<"\nicu : "<<icut<<"\nother : "<<oth;
cout<<"\ntotal : "<<gt<<"\ntax : "<<tax<<"\ngrand total : "<<ftot;
}
~hos3()
{}
};
int main()
{
hos3 o;
system("cls");
o.hos1::data();
o.hos2::show();
o.hos2::info();
o.cal();
system("cls");
o.hos1::bill1();
o.hos2::bill2();
o.bill3();
getch();
}


