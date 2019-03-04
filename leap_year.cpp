#include<iostream>
#include<conio.h>
using namespace std;
class leap
{
private:
int n;
public:
void val();
};
void leap::val()
{
cout<<"\nenter year :";
cin>>n;
if(n%4==0)
{
cout<<"\n"<<n<<" is a leap year";
}
else
{
cout<<"\n"<<n<<" is not a leap year";
}
}
int main()
{
leap le1;
le1.val();
getch();
}
