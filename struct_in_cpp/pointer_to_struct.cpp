#include <iostream>
using namespace std;

struct Length
{
	int meters;
	float centimeters;
};

int main()
{
    //Tạo một biến con trỏ * ptr và biến bình thường l kiểu Length.
	Length *ptr, l;

	ptr = &l;//Lưu trữ địa chỉ của biến l trong biến con trỏ của chúng ta.

	cout << "Enter meters: ";
	cin >> (*ptr).meters;
	cout << "Enter centimeters: ";
	cin >> (*ptr).centimeters;
	cout << "Length = " << (*ptr).meters << " meters " << (*ptr).centimeters << " centimeters";

	return 0;
}