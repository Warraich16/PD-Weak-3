#include <iostream>
using namespace std;
int main()
{
string movie;
int adult_ticket_price;
int child_ticket_price;
int number_of_adult_tickets;
int number_of_child_tickets;
float percentage;
int total_amount;
int adult_tickets_price;
int child_tickets_price;
int donation;
int amount_after_donation;
cout <<"Enter movie name:"<<endl;
cin >>movie;
cout <<"Enter adult ticket price: "<<endl;
cin >>adult_ticket_price;
cout <<"Enter child ticket price: "<<endl;
cin >>child_ticket_price;
cout <<"Number of adult ticket sold:"<<endl;
cin >>number_of_adult_tickets;
cout <<"Number of child ticket sold:"<<endl;
cin >>number_of_child_tickets;
cout <<"Enter percentage to donate:"<<endl;
cin >>percentage;
adult_tickets_price=adult_ticket_price*number_of_adult_tickets;
child_tickets_price=child_ticket_price*number_of_child_tickets;
total_amount=adult_tickets_price+child_tickets_price;
cout <<"Total amount generated:"<<total_amount;
donation=(percentage/100)*total_amount;
amount_after_donation=total_amount-donation;
cout <<"Amount after donating to the charity:"<<amount_after_donation;


return 0;
}
