#include<iostream>
#include<conio.h>
using namespace std;
class div
{
private:
float a,b,d;
public:
void val();
void calc();
};
void div::val()
{
cout<<"enter two values: ";
cin>>a>>b;
}
void div::calc()
{
d=a/b;
cout<<"answer is "<<d;
}
int main()
{
div d1;
d1.val();
d1.calc();
getch();
}
