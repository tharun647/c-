#include<iostream>
using namespace std;
class base
{
	public:
		void parent()
		{
			cout<<"parent";
		}
};
class derived:public base
{
	public:
		void child()
		{
			cout<<"child";
		}
};
int main()
{
	derived obj;
	obj.child();
	obj.parent();
	return 0;
}