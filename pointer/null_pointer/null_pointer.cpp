#include <iostream>
using namespace std;
int main(){
float *ptr{ 0 };  // ptr là 1 con trỏ null

float *ptr2; // ptr2 là con trỏ rác
ptr2 = 0; // ptr2 là 1 con trỏ null
//Ta có thể sử dụng một điều kiện để kiểm tra xem một con trỏ có null hay không:
// double *ptr{ 0 };

// con trỏ sẽ chuyển thành true nếu nó null, và false nếu nó không null
if (ptr)
	cout << "con tro tro den dia chi.";
else
	cout << "con tro null.";
}