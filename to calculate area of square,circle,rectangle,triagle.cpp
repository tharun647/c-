#include<iostream>
using namespace std;
void area(float r)
{
	cout<<"\narea of circle : "<<3.14*r*r;
}
void area(int a)
{
	cout<<"\narea of square : "<<a*a;
}
void area(float l,float b)
{
	cout<<"\narea of rectangle : "<<l*b;
}
void area(int b1,int h)
{
	cout<<"\narea of triangle : "<<0.5*b1*h;
}
int main()
{
	float r=2.1,l=2.2,b=3.4;
	area(r);
	area(4);
	area(l,b);
	area(5,3);
	return 0;
}
#include<iostream>
using namespace std;
void si(int a,intb,int c)
{
	cout<<"\ninterest : "<<(a*b*c)/100;
}
int main()
{
	int p,n,r,s;
	cout<<"\nenter the principle amt : ";
	cin>>p;
	cout<<"\nenter the no of years : ";
	cin>>n;
	cout<<"\nare you senior citizen \n1.yes \n2.no \nenter your choice : ";
	cin>>s;
	if(s==1)
	si(p,n,12);
	else
	si(p,n,10);
	
}