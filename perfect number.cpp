#include <iostream> 
using namespace std;
int main()
{
 int num = 777;
 int i = 1;
 int total = 0;

 for(i=1; i<num; i++)
 {
  if(num % i == 0)
   total += i;
 }
 
 if(total == num)
  cout << num << " is a perfect number";
 else
  cout << num << " is not a perfect number";
 
 return 0;
}
