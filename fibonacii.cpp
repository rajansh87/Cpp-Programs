#include<iostream>
#include<conio.h>
using namespace std;
class fibo
{
private:
int len,i,a,b,c;
public:
fibo()
{
a=0;
b=1;
}
void val();
void ser();
~fibo()
{}
};
void fibo::val()
{
cout<<"enter length of series : ";
cin>>len;
}
void fibo::ser()
{
cout<<"\n"<<a<<"\n"<<b;
for(i=0;i<len;i++)
{
c=a+b;
cout<<"\n"<<c;
a=b;
b=c;
}
}
int main()
{
fibo f1;
f1.val();
f1.ser();
getch();
}
