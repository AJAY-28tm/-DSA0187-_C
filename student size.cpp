#include<iostream>
const int size=5;
class student
{
int roll_no;
int marks[size];
public:
void getdata ();
void tot_marks ();
} ;

void student :: getdata ()
{
for(int i=0; i<size; i++)
{
cout<<"Enter marks in subject"<<(i+1)<<": ";
void student :: tot_marks() 
{
int total=0;
for(int i=0; i<size; i++)
total+ = marks[i];
cout<<"\n\nTotal marks "<<total;
}
void main()
}
'student'stu;
stu.getdata() ;
stu.tot_marks() ;
getch();
}
