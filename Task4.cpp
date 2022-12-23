#include <iostream>
using namespace std;
int main()
{
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float totalmarks;
float obtainedmarks;
string name;
float percentage;
cout <<"Enter your name:"<<endl;
cin >>name;
cout <<"Enter your subjects marks out of hundred: "<<endl;
cout <<" Enter the marks of first Subject: "<<endl;
cin >>subject1;
cout <<" Enter the marks of second Subject : "<<endl;
cin >>subject2;
cout <<" Enter the marks of third Subject: "<<endl;
cin >>subject3;
cout <<" Enter the marks of fourth Subject: "<<endl;
cin >>subject4;
cout <<" Enter the marks of fifth Subject: "<<endl;
cin >>subject5;
obtainedmarks=subject1+subject2+subject3+subject4+subject5;
totalmarks=500;
percentage=(obtainedmarks/totalmarks)*100;
cout <<"Your Percentage is :"<<percentage;


}