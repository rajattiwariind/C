#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()

{
int a[10],i=0,j;
clrscr();

cout<<endl<<endl<<"enter 10 real nos.";
for(i=0;i<10;i++)
{
cin>>a[i];
}
cout<<endl<<endl<<"\n original list is:"<<endl;
for(i=0;i<10;i++)
{
cout<<a[i]<<endl;
}
i=0;
while(i==0)
{
i=1;
for(j=0;j<9;j++)
{
if(a[j]>a[j+1])
{
int temp;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
i=0;
}
}
}
cout<<"\n sorted list is:"<<endl;
for(i=0;i<10;i++)
{
cout<<a[j]<<endl;
}
getch();
}
