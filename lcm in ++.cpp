#include <iostream> 
using namespace std;
int main()
{
 int num1 = 45;
 int num2 = 90;
 int max;

 max = (num1 > num2) ? num1 : num2;

 // Always true
 while(1)
 {
  if((max % num1 == 0) && (max % num2 == 0))
  {
   cout << "LCM of " << num1 << " and " << num2 << ": " << max;
   break;
  }
  ++max;
 }
 return 0;
}