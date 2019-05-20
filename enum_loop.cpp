enum enumType
{
	A,
	B,
	C,
	enumTypeEnd
};


int main() {
	enumType x;
	for (x = A; x <= C; x = enumType(x + 1)) {
		cout << x << endl;
	}
	return 0;
}
