#include <iostream>
using namespace std;

// Class to represent a box
class Box {
public:
	// Constructor
	Box(double length, double width, double height)
	{
		cout << "Box constructor called." << endl;
		m_length = length;
		m_width = width;
		m_height = height;
	}

	// Function to calculate the volume of a box
	double volume()
	{
		return m_length * m_width * m_height;
	}

private:
	double m_length{1.0};
	double m_width{1.0};
	double m_height{1.0};
};

int main()
{
	Box firstBox{80.0, 50.0, 40.0}; // Create a box
	double firstBoxVolume {firstBox.volume()}; // Calculate the box volume
	cout << "Volume of Box object is " << firstBoxVolume << endl;

	// Box secondBox; // Causes a compiler error message

	return 0;
}
