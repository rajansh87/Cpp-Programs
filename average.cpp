#include<iostream>
#include<conio.h>
using namespace std;
class avg
{
private:
float i,num,av,sum,n;
public:
avg()
{
av=0;
sum=0;
}
void input();
void average();
void output();
~avg()
{}
};
void avg::input()
{
cout<<"enter number of elements : ";
cin>>n;
}
void avg::average()
{
cout<<"enter elements : ";
for(i=0;i<n;i++)
{
cin>>num;
sum=sum+num;
}
av=sum/n;
}
void avg::output()
{
    cout<<"\nsum is "<<sum<<"\naverage is "<<av;
}
int main()
{
avg a1;
a1.input();
a1.average();
a1.output();
getch();
}
