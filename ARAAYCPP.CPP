#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[5];

cout<<"enter the data"<<endl;
for(int i=0;i<5;i++)
{
cin>>a[i];
}

  int sum=a[1]+a[2];
cout<<"values of the data"<<endl;
for( i=0;i<5;i++)
{
cout<<a[i]<<endl;
}

cout <<"sum"<<sum;
getch();
}