#include <iostream>
using namespace std;
class Room {
   public:
    double length;
    double breadth;
    double height;
    double calculateArea() 
	{
        return length * breadth;
    }
    double calculateVolume()
	 {
        return length * breadth * height;
    }
};
int main()
 {
    Room room1;
    room1.length = 4;
    room1.breadth = 8;
    room1.height = 4;

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
