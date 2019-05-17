// Manmeet Singh
//This function can sort 10 pairs
//of cartesian coordinates 
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;


const int num_pairs = 10; // Number of pairs 
struct coordinates
{
	double x;
	double y;
	double distance;
};

enum coordinateType
{
	x,
	y,
	distances
};

// function prototypes
int read(coordinates[]);
void sort(coordinates[], coordinateType coordinate_type, int);
void print(coordinates[], coordinateType coordinate_type, int);

int main()
{
	coordinateType coordinate_type;
	int size;
	coordinates coordinate[num_pairs];
	size = read(coordinate);
	for (coordinate_type = x; coordinate_type <= distances; coordinate_type = coordinateType(coordinate_type + 1))
	{
		sort(coordinate, coordinate_type, size);
		print(coordinate, coordinate_type, size);
	}
	return 0;
}
int read(coordinates coordinate[])
{
	ifstream file;
	int printer;
  printer = 0;
	file.open("points.txt");
	if (!file.is_open())
	{
		cout << "Error, File not Found!\n" << endl;
	}
	while (not file.eof() and printer <= num_pairs)
	{
		file >> coordinate[printer].x;
		file >> coordinate[printer].y;
		coordinate[printer].distance = sqrt(coordinate[printer].x*coordinate[printer].x +
			coordinate[printer].y*coordinate[printer].y);
		printer++;
	}
	file.close();
	return printer;
}
void sort(coordinates coordinate[num_pairs], coordinateType  coordinate_type, int size)
{
	int currunt, last, length = size - 2;
	coordinates temp;
	bool out_of_order;
	for (last = 0; last <= length; last++)
		for (currunt = 0; currunt <= length - last; currunt++)
		{
			switch (coordinate_type)
			{
			case x:
				out_of_order = coordinate[currunt + 1].x < coordinate[currunt].x;
				break;
			case y:
				out_of_order = coordinate[currunt + 1].y > coordinate[currunt].y;
				break;
			case distances:
				out_of_order = coordinate[currunt + 1].distance < coordinate[currunt].distance;
				break;
			default:
				break;
			}
			if (out_of_order)
			{

				temp = coordinate[currunt];
				coordinate[currunt] = coordinate[currunt + 1];
				coordinate[currunt + 1] = temp;
			}
		}
}
void print(coordinates coordinate[num_pairs], coordinateType  coordinate_type, int max)
{
	int printer;
	switch (coordinate_type)
	{
	case x:
		cout << "Order by increasing x-values:" << endl;
		break;
	case y:
		cout << "Order by decreasing y-values:" << endl;
		break;
	case distances:
		cout << "Order by increasing distance from the origin:" << endl;
		break;
	default:
		break;
	}
	for (printer = 0; printer <= max - 1; printer++)
	{
		cout << "x:" << coordinate[printer].x << "  " << "y:" <<
			coordinate[printer].y << "  " << "distance:"
			<< coordinate[printer].distance << endl;
	}
}
