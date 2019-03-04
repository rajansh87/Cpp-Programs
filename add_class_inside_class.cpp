#include<iostream>
#include<conio.h>
using namespace std;
class x
{
friend class y;
protected:
    int a,b;
public:
    void get()
    {
        cout<<"enter number : ";
        cin>>a>>b;
    }
};
class y
{
private:
    int c;
public:
    void sum(class x o1)
    {
        c=o1.a+o1.b;
        cout<<"\nsum = "<<c;
    }
};
int main()
{
    x o1;
    y o2;
    o1.get();
    o2.sum(o1);
    getch();
}
