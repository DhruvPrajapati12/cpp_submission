// This code is for finding the area and volume of given object
// @author Dhruv Prajapati

#include <iostream>
using namespace std;

//define class Measure

class Measure
{
	public:
		
		//declaring height, length, width variable of type integer

		int height, length, width;

		//set three inputs using setInput() function

		void setInput(int a, int b, int c)
		{
			height = a;
			length = b;
			width = c;
		}  //end of setInput function

		//area() function returns the area of object		

		int area()
		{
			return length * width;
		}

		//volume() function returns the volume of object

		int volume()
		{
			return length * width * height;
		}
};	//end of Measure class

int main()
{
	Measure obj1, obj2;			//Creating two object obj1 and obj2

	obj1.setInput(10, 20, 30);	//set inputs of obj1
	obj2.setInput(20, 30, 40);	//set inputs of obj2

	cout << "Object 1 has " << obj1.height << " height, " << obj1.length << " length, " << obj1.width << " width. Area = " << obj1.area() << " Volume = " << obj1.volume() << endl;
	cout << "Object 2 has " << obj2.height << " height, " << obj2.length << " length, " << obj2.width << " width. Area = " << obj2.area() << " Volume = " << obj2.volume() << endl;

	return 0;
}	//end of main function
