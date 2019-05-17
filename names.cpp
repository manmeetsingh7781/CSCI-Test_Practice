// Manmeet Singh
// This programs sorts the named list in A-Z order

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Function prototypes
void sort(string[], int);
const int  LIST_SIZE = 5;

int main() {
	int counter;
	string line;
	string names[LIST_SIZE];
  ifstream input_file;
  ofstream my_new_file;
  counter = 0; 
  input_file.open("names.txt");
	my_new_file.open("Sorted_file.txt"); // opening the new file to write 
  // Reads the file and storing the data into an array
	while (not input_file.eof() and counter != LIST_SIZE) {
    getline(input_file, line);
		names[counter] = line;
		counter++;
	}

	sort(names, LIST_SIZE); // Sorting the array   
  // Writing to new file
  counter = 0; 
	while(counter != LIST_SIZE){
    my_new_file << names[counter] <<  "\n";
	  counter++;
	}
	my_new_file.close();
	input_file.close();
	cout << endl;
	return 0;
}

// This function sorts the array using bubble sort
void sort(string arr[], int size) {
	char letter;
	int number = 0, start, y;
	string temp;
	char smaller, bigger;
	for (start = 0; start <= size; start++) {
		number++;

		// Here I am checking words pair by pair 
		for (y = 0; y < size - number; y++) {
			smaller = arr[y][0]; // each first letter of word
			bigger = arr[y + 1][0];
      
			// switching the words in order
			if (smaller > bigger) {
				temp = arr[y];
				arr[y] = arr[y + 1];
				arr[y + 1] = temp;
			}
		}
	}
}
