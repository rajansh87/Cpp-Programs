#include<iostream>
#include<conio.h>
class add
{
private:
int a,b,c;
public:
void data()
{
std::cout<<"enter two numbers:";
std::cin>>a>>b;
}
void calc()
{
c=a+b;
std::cout<<"\nanswer = "<<c;
}
};
int main()
{
add a1;
a1.data();
a1.calc();
getch();
}
