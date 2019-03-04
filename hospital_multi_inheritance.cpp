#include"iostream"
#include"conio.h"
#include<stdlib.h>
using namespace std;
class data
{
protected:
char pn[40],add[80];
long cn,age;
public:
void info1()
{
cout<<"\nenter patient name,address, contact no and age : ";
cin>>pn>>add>>cn>>age;
}
void dis1()
{
cout<<"\nPatient Name : "<<pn<<"\nAddress : "<<add<<"\nContact : "<<cn<<"\nAge : "<<age;
}
};
class record
{
protected:
char doc[40],dis[40],adt[10];
long w,rn;
public:
void list()
{
cout<<"\n\t\t1.\tAC\n\t\t2.\tPrivate\n\t\t3.\tSemi Private\n\t\t4.\tGeneral";
}
void info2()
{
cout<<"\nenter Admission Date,disease,doctor,Ward and Room No. : ";
cin>>adt>>dis>>doc>>w>>rn;
}
void dis2()
{
cout<<"\nAdmission Date : "<<adt<<"\nDieases : "<<dis<<"\nDoctor : "<<doc<<"\nRoom No. : "<<rn;
}
};
class bill: public data, public record
{
protected:
long rc,sd,mch,df,oth,tot;
char disdt[10];
public:
void cal1()
{
if (w==1)
{
rc=3000;
}
else if(w==2)
{
rc=2000;
}
else if(w==3)
{
rc=1200;
}
else if(w==4)
{
rc=750;
}
cout<<"\nEnter Stay Days, Medicine Charge ,Doctor's Fees,Other Charges,Discharge Date :";
cin>>sd>>mch>>df>>oth>>disdt;
tot=(rc*sd)+mch+df+oth;
}
void dis3()
{
cout<<"\nStay Days : "<<sd<<"\nMedicine Charge : "<<mch<<"\nDoctor Fees : "<<df<<"\nOthers : "<<oth<<"\nTotal : "<<tot<<"\nDischarge Date : "<<disdt;
}
};
int main()
{
bill b1;
system("cls");
b1.data::info1();
b1.record::list();
b1.record::info2();
b1.cal1();
system("cls");
b1.data::dis1();
b1.record::dis2();
b1.dis3();
getch();
}
