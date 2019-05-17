// Manmeet Singh
// Header file for the Big number number
const int MAX_DIGITS = 100;
class BigNumber
{
public:
	void readbig();
	void printbig();
	BigNumber addbig(BigNumber);
private:
	int num[MAX_DIGITS];
};
