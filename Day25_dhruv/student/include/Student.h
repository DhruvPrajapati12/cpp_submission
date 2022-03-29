#include<string>
using namespace std;

class Student{
private:
	std::string name;
public:
	Student(string str);
	virtual void display();
};
