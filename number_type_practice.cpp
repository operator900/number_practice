#include <iostream>

using namespace std;

int main() {

	float someFloat = 2.45f;

	int someInt = static_cast<int>(someFloat); //converts to an int type

	cout << someInt << endl; //truncates the .45

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFlt;
	double someDouble;

	someInteger++; //257
	someInteger *= 2; //514
	cout << someInteger << endl;
	someShort = static_cast<short>(someInteger); //514
	cout << someShort << endl;
	someLong = someShort * 10000; //5,140,000
	cout << someLong << endl;
	someFloat = someLong + 0.785f; //5,140,000.785 or an error, not sure.
	cout << someFloat << endl;
	someDouble = static_cast<double>(someFloat) / 100000; //same as the last data type. Update: did not see the division ;_;
	cout << someDouble; //5,140,000.785(?) --> answer was 51.4, but why? Just found out up here^

	enum class Fruit
	{
		Apple,
		Orange,
		Banana,
		Tangerine
	};

	enum class Color
	{
		Red,
		Orange,
		Green,
		Blue
	};

	Fruit fruitType = Fruit::Orange;
	Color colorType = Color::Orange;
	
}