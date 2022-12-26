#include<iostream>
using namespace std;
main()
{
string movie_name;
int adult_tp;
int child_tp;
int sold_adult_tickets;
int sold_child_tickets;
float total_amount;
float donated_per;
float amount_generated;
float total_adult_tickets;
float total_child_tickets;
float afterdonations;
float totaldonations;
cout<<" enter movie name ";
cin>> movie_name;
cout<< " enter adult ticket price ";
cin>>adult_tp;
cout<< " enter child ticket price ";
cin>> child_tp;
cout<< " enter the no. of adult tickets sold ";
cin>> sold_adult_tickets;
cout<< " enter the no. of child tickets sold ";
cin>> sold_child_tickets;
cout<< " enter percentage donated" ;
cin>> donated_per;
total_amount=adult_tp*sold_adult_tickets+child_tp*sold_child_tickets;
cout<<" total_amount generated " << total_amount<<endl;
totaldonations=(amount_generated*donated_per)/100;
afterdonations=amount_generated-totaldonations;
cout<< " amount after donation : " <<afterdonations;
}
