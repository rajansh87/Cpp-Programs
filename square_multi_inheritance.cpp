#include"iostream"
#include"conio.h"
#include"math.h"
#include<stdlib.h>
using namespace std;
class sqr
{
protected:
int n,s;
public:
void get()
{
cout<<"Enter No. : ";
cin>>n;
}
void ar()
{
s=n*n;
}
};
class sqt
{
protected:
int x,sr;
public:
void val()
{
cout<<"\nEnter No. ";
cin>>x;
}
void ss()
{
sr=sqrt(x);
}
};
class show : public sqr, public sqt
{
public:
void dis()
{
cout<<"\nSquare = "<<s<<"\nSquare Root = "<<sr;
}
};
int main()
{
show s1;
system("cls");
s1.sqr::get();
s1.sqr::ar();
s1.sqt::val();
s1.sqt::ss();
s1.dis();
getch();
}

