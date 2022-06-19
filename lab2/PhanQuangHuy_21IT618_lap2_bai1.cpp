#include <iostream>
#include<stdlib.h>
using namespace std;
struct SN
{
    string name;
    string Date;
    double math;
    double physic;
    double language;
    SN *link;
};
SN*L,*k;
//xuat ra man hinh thong tin hoc sinh da nhap
void xuat(SN*L){
    SN*P;
    P=L;
    while (P !=NULL)
    {
        cout<<P->name<<" ";
        cout<<P->Date<<" ";
        cout<<P->math<<" ";
        cout<<P->physic<<" ";
        cout<<P->language;
        P=P->link;
        cout<<"\n";
    }
}
//nhap thong tin hoc sinh can nhap
void nhap(SN*&L,SN*&k){
    SN*p;
    char a;
    do
    {
        
        p=new SN;
        cout<<"nhap ten =";
        cin.ignore();
        getline(cin,p->name);
        fflush(stdin);
        cout<<"nhap ngay sinh =";
        getline(cin,p->Date);
        fflush(stdin);
        cout<<"diem toan =";
        cin>>p->math;
        fflush(stdin);
        cout<<"diem ly =";
        cin>>p->physic;
        fflush(stdin);
        cout<<"diem anh =";
        cin>>p->language;
        p->link=NULL;
        if (L==NULL){
            L=p;
            k=p;
        }else
        {
            k->link=p;
            k=p;

        }
        
        cout<<"Nhap tiep?(y/n)";
        fflush(stdin);
        cin>>a;
}while(a=='y'||a=='Y');
}
//them thong tin hoc sinh vao 
void Insert(SN*&L,SN*&k){
    SN*p;
    SN*p1;
    char a;
    do
    {
        
        p1=new SN;
        cout<<"nhap ten =";
        cin.ignore();
        getline(cin,p1->name);
        fflush(stdin);
        cout<<"nhap ngay sinh =";
        getline(cin,p1->Date);
        fflush(stdin);
        cout<<"diem toan =";
        cin>>p1->math;
        fflush(stdin);
        cout<<"diem ly =";
        cin>>p1->physic;
        fflush(stdin);
        cout<<"diem anh =";
        cin>>p1->language;
        p1->link=NULL;
        if (L){
            p1->link=k->link;
            k->link=p1;
        }else
        {
            p1->link=NULL;
            k=p1;
        }
        
        cout<<"Nhap tiep?(y/n)";
        fflush(stdin);
        cin>>a;
}while(a=='y'||a=='Y');
}
//Đếm số học sinh trong một năm sinh nhất định
int countStudent(string day,int count,SN*L){
    SN*P;
    P=L;
    while (P !=NULL)
    {
        if ((P->Date)==(string)day)
        {
        count=count+1;
        }
        P=P->link;
    }
    return  count;
}
//kiểm tra xem sinh viên đó có tồn tại hay không dựa trên tên
int checkNameStudent(SN*L,string ten){
SN*P;
P=L;
    while (P !=NULL)
    {
    	if(P->name == ten){
		return 1;
		}
        P=P->link;
    }
    return 0;
    
}
//xoá sinh viên từ danh sách theo tên
// void deleteStudent(SN*&L,SN*&k,string name1){
//     SN*P;
//     SN*d;
//     while (P !=NULL)
//     {
//         if(P->name==name1){
//             d=k->link;
//             P->link=P->link->link;
//             delete P;
//     }   
//     P=P->link;
//     }
// }
//tìm có điểm trung bình lớn nhất
// double avg(SN*P){
//         P->dtb=(P->math+P->physic+P->language)/3;
// }


int main(){
    L=NULL;
    k=NULL;
    int count =0;
    int i =0;
    do
    {

        cout<<"--Your optional--"<<endl;
        cout<<"1.Input n students information."<<endl;
        cout<<"2.Print out the student list"<<endl;
        cout<<"3.Add a new student to the list."<<endl;
        cout<<"4.Count the number of students in a given year of birth"<<endl;
        cout<<"5.Check if a student name x exists in the list or not."<<endl;
        cout<<"6.Delete a student from the list by a given name x."<<endl;
        cout<<"7.Find the student(s) having the biggest average of math, physic and language marks"<<endl;
        cout<<"8.Print the list of students whose math mark is less than 5."<<endl;
        cout<<"9.Write the student list to a file named StudentList.txt."<<endl;
        cout<<"0.Exit"<<endl;
        cin>>i;
        if (i ==1)
        {
            cout<<"1.Input n students information."<<endl;
            nhap(L,k);
        }
        else if (i ==2)
        {   
            cout<<"2.Print out the student list"<<endl;
            xuat(L);
        }
        else if (i ==3)
        {
            Insert(L,k);
        }
        else if (i ==4)
        {
            string day;
            cout<<"Nhap ngay/thang/nam cua so hoc sinh can tim"<<endl;
            cin>>day;
            cout<<"Count the number of students : "<<countStudent(day,count,L)<<endl;
        }
        else if (i ==5)
        {
            string ten;
            cout<<"nhap ten can tim"<<endl;
            cin.ignore();
            getline(cin,ten);
        	int result = checkNameStudent(L, ten);
            if (result == 1)
            {
                cout<<ten<<" co trong danh sach"<<endl;
            }
            else
            {
                cout<<ten<<" khong co trong danh sach"<<endl;
            }
            
        }
        // else if (i ==6)
        // {
        //     string name1;
        //     cout<<"Delete a student from the list by a given name x"<<endl;
        //     cout<<"nhap ten sinh vien can xoa :"<<endl;
        //     cin.ignore();
        //     getline(cin,name1);
        //     deleteStudent(L,k,name1);

        // }
        // else if (i==7)
        // {
            
        // }
        
        
    
    } while (i !=0);

    return 0;
}