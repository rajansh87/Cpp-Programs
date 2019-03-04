#include<iostream>
#include<conio.h>
using namespace std;
class fact
{
private:
int n,f,i;
public:
void val();
};
void fact::val()
{
cout<<"\nenter number :";
cin>>n;
i=1;
f=1;
while(i<=n)
{
f=f*i;
i++;
}
cout<<"\nfactorial of "<<n<<" is "<<f;
}
int main()
{
fact f1;
f1.val();
getch();
}
