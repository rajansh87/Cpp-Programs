#include<iostream>
#include<conio.h>
class si
{
private:
float ints,a,r,t;
public:
void data()
{
std::cout<<"enter amount,rate,time: ";
std::cin>>a>>r>>t;
}
void calc()
{
ints=a*r*t/100;
std::cout<<"\ninterest ="<<ints;
}
};
int main()
{
si s1;
s1.data();
s1.calc();
getch();
}

