#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class data
{
protected:
char n[40],des[40],dep[40];
public:
void get()
{
cout<<"Enter Name, Department and Designation :";
cin>>n>>dep>>des;
}
void dis1()
{
cout<<"\nName : "<<n<<"\nDepartment : "<<dep<<"\nDesignation : "<<des;
}
};
class acc
{
protected:
float b,da,hra,ta,oth,sa;
public:
void value()
{
cout<<"\nEnter Basic :";
cin>>b;
if(b>=15000)
{
da=b*113/100;
hra=b*25/100;
ta=b*30/100;
sa=b*18/100;
oth=b*15/100;
}
else if((b>=9000) && (b<15000))
{
da=b*113/100;
hra=b*25/100;
ta=b*30/100;
sa=0;
oth=b*15/100;
}
else
{
da=b*113/100;
hra=b*25/100;
ta=0;
sa=0;
oth=b*15/100;
}
}
void disacc()
{
cout<<"\nBasic : "<<b<<"\nDA : "<<da<<"\nHRA : "<<hra<<"\nTA : "<<ta<<"\nSA : "<<sa<<"\nOther : "<<oth;
}
};
class sslip : public data, public acc
{
protected:
float grs,pf,ns;
public:
void sal()
{
grs=b+da+hra+ta+sa+oth;
pf=b*12/100;
ns=grs-pf;
}
void dissal()
{
cout<<"\nGross Salary : "<<grs<<"\nPF : "<<pf<<"\nNet Salary : " <<ns;
}
};
int main()
{
sslip o;
system("cls");
o.data::get();
o.acc::value();
o.sal();
system("cls");
o.data::dis1();
o.acc::disacc();
o.dissal();
getch();
}




