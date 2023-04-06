#include<iostream.h>
#include<conio.h>
void main ()
{
 int a,b;
 clrscr();
 cout<<"Enter the value of a:";
 cin>>a;
 for(int i=2; i<=a; a++)
 {
 if((a%1) == 0)
  break;
 }
 {
 if((a== 1) || (a== i))
  cout<<"\n"<<a<<"is prime";
 else
  cout<<"\n"<<a<<"is not prime";
}
 getch();
}