#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class no
{
protected:
int a,b;
public:
void val()
{
cout<<"Enter two no. : ";
cin>>a>>b;
}
};
class sum: public no
{
protected:
int c;
public:
void add()
{
c=a+b;
}
};
class show: public sum
{
public:
void dis()
{
cout<<"\nSum = "<<c;
}
};
int main()
{
show s1;
system("cls");
s1.no::val();
s1.sum::add();
s1.dis();
getch();
}
