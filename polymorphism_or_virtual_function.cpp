#include"iostream"
#include"conio.h"
#include<stdlib.h>
using namespace std;
class x
{
public:
virtual void dis()
{
cout<<"\nVirtual function";
}
};
class y: public  x
{
public:
void dis()
{
cout<<"\nOriginal function";
}
};
int main()
{
x *o1,*o2;
system("cls");
o1=new x();
o1->dis();
o2=new y();
o2->dis();
getch();
}
