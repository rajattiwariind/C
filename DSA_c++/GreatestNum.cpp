#include<iostream.h>
#include<conio.h>

int main()
{
int a,b,c;
clrscr();
cout<<"enter the no a";
cout<<"\n enter the no b";
cout<<"\n enter the no c";
cin>>a>>b>>c;
if (a>=b)
{
cout<<"a is greater";
}
else if(b>=c)
{
cout<<"b is greater";
}
else if(c>=a)
{
cout<<"c is greater";
}
else if (a==b==c)
{
cout<<" all are equal";
}
getch();
}
