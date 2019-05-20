
// For String 
void sort(string arr[], int size) {
	string temp;
	int start, s;
	for (start = size; start >= 0; start--) {
		for (s = 0; s < start; s++) {
			if (arr[s][0] > arr[s+1][0]) {
				temp = arr[s];
				arr[s] = arr[s+1];
				arr[s + 1] = temp;
			}
			
		}
	}
}

// for int or double
void sort(double arr[], int size) {
	double temp;
	int start, s;
	for (start = size; start >= 0; start--) {
		for (s = 0; s < start; s++) {
			if (arr[s] > arr[s+1]) {
				temp = arr[s];
				arr[s] = arr[s+1];
				arr[s + 1] = temp;
			}
		}
	}
}
