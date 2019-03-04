#include<iostream>
#include<conio.h>
using namespace std;
class big
{
private:
int a,b;
public:
void val()
{
cout<<"\nenter two numbers : ";
cin>>a>>b;
}
friend void grt(big b1);
};
void grt(big b1)
{
if(b1.a>b1.b)
{
cout<<"\na is greatest ";
}
else
{
cout<<"\nb is greatest ";
}
}
int main()
{
big b1;
b1.val();
grt(b1);
getch();
}
