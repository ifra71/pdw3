#include<iostream>
using namespace std;
main()
{
string name;
int s1_marks;
int s2_marks;
int s3_marks;
int s4_marks;
int s5_marks;
int total_marks;
int obtain_marks;
int sum;
float percentage;
total_marks=500;
cout<< "enter name : ";
cin>> name;
cout<< " enter s1_marks : ";
cin>> s1_marks;
cout<< " enter s2_marks : ";
cin>> s2_marks;
cout<< " enter s3_marks : ";
cin>> s3_marks;
cout<< " enter s4_marks : ";
cin>> s4_marks;
cout<< " enter s5_marks : ";
cin>> s5_marks;
obtain_marks=(s1_marks+s3_marks+s2_marks+s4_marks+s5_marks);
percentage=(obtain_marks*100)/total_marks;
cout <<" percentage is = " << percentage << endl;
}


