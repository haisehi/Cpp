#include <iostream>
using namespace std;
int&A;
struct Student
{
char name[30];
char class1[10];
float mMath;
float mPhysical;
};

int main(){
    struct Student st ;
    cin>>st.name;
    cin>>st.class1;
    cin>>st.mMath;
    cin>>st.mPhysical;
    cout<<st.name;
    cout<<st.mMath;
    cout<<st.mPhysical;


}
