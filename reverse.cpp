#include<iostream>
#include<conio.h>
using namespace std;
class rev
{
private:
int n,r;
public:
void val();
};
void rev::val()
{
cout<<"enter number : ";
cin>>n;
while(n>0)
{
r=n%10;
cout<<r;
n=n/10;
}
}
int main()
{
rev r1;
r1.val();
getch();
}
