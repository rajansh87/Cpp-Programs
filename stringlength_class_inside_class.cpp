#include<iostream>
#include<conio.h>
using namespace std;
class str
{
friend class str1;
protected:
    char a[50];
    int v,c,len,j,t;
public:
    str()
    {
        v=0;
        c=0;
    }
    void length()
    {
        cout<<"\nenter string : ";
        cin>>a;
    }
    ~str()
    {
    }
};
class str1
{
private:
    int i;
public:
    str1()
    {
        i=0;
    }
    void aa(class str s1)
    {
        while(s1.a[i]!='\0')
        {
            if((s1.a[i]=='a')||(s1.a[i]=='e')||(s1.a[i]=='i')||(s1.a[i]=='o')||(s1.a[i]=='u'))
            {
                s1.v++;
                i++;
            }
            else
            {
                s1.c++;
                i++;
            }
        }
        s1.len=s1.v+s1.c;
        cout<<"\nlength = "<<s1.len;
    }
    ~str1()
    {
    }
};
int main()
{
    str s1;
    str1 s2;
    s1.length();
    s2.aa(s1);
    getch();
}
