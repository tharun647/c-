#include<iostream>
int main()
{
	try
	{
		int age;
		std::cout<<"enter the age";
		if (age>=18)
		{
			std::cout<<"Access granted";
		}
		else
		{
			throw (age);
		}
	}
	catch(int myNum)
	{
		std::cout<<"Access denied";
		std::cout<<"Age is:"<<myNum;
	}
	return 0;
}
