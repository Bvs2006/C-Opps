#include<iostream>
using namespace std;
class student{
private:
  string name;
  int rollno;
  int marks;
public:
   void addstudent(string name,int rollno,int marks)
   {
    this->name=name;
    this->rollno=rollno;
    this->marks=marks;
   }
   void displayStudent()
   {
    cout<<"name:"<<name<<" \n"<<"rollno:"<<rollno<<"\n"<<"marks:"<<marks<<"\n";
   }
   void getmarks()
   {
    cout<<name<<":"<<marks<<"\n";
   }
   void setmarks(int marks)
   {
    this->marks=marks;
   }
};
int main()
{
    student st1;
    student st2;

    st1.addstudent("srujith",33,90);
    st2.addstudent("satya",311,90);
    st1.displayStudent();
    st2.displayStudent();    
    st1.getmarks();
    st2.getmarks();
    st1.setmarks(100);
    st2.setmarks(80);

}
