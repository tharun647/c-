#include<iostream>
using namespace std;
int main()
{
	int i,j,rows,num=1;
	cout<<"enter number of rows:";
	cin>>rows;
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<num<<"";
			num++;
		}
		cout<<endl;
	}
	return 0;
}