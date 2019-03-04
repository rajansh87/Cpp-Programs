#include<iostream>
#include<conio.h>
using namespace std;
class big
{
private:
char x,y;
public:
void val()
{
cout<<"\nenter two characters : ";
cin>>x>>y;
}
friend void grt(big b1);
};
void grt(big b1)
{
int a,b;
if(b1.x>b1.y)
{
a=b1.x;
cout<<"\n"<<b1.x<<" is greater and its ascii value is "<<a;
}
else
{
b=b1.y;
cout<<"\n"<<b1.y<<" is greater and its ascii value is "<<b;
}
}
int main()
{
big b1;
b1.val();
grt(b1);
getch();
}
