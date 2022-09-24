#include <iostream>
using namespace std;
class student
{
private:
    int rollno;
    char fname[10],mname[10],lname[10];
    char branch[15];
    char city[15];
public:
    void get_data()
    {
	cout<<"total users";
    }
    void display()
    {
        cout<<"total user:";
    }
};
int main()
{
    student s1;
    cout << "Enter student details"<< endl;
    s1.get_data();
    cout << "Student Details " << endl;
    s1.display();
    return 0;
}
