#include <iostream>
using namespace std;

void doSomething(double *ptr)
{
	// ptr sẽ chuyển thành true nếu nó null, và false nếu nó không null
	if (ptr)
		std::cout << "You passed in " << *ptr << '\n';
	else
		std::cout << "You passed in a null pointer\n";
}

int main()
{
    double *ptr = nullptr; //ptr là 1 con trỏ null
	doSomething(nullptr); // truyền con trỏ null vào hàm

	return 0;
}
