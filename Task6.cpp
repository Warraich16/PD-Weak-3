#include <iostream>
using namespace std;
int main()
{
int size;
float cost_of_bag;
int areasquarefeet;
int cost_per_square_feet;
float cost_of_fertilizer;
cout <<"Enter Bag size in pounds:"<<endl;
cin >>size;
cout <<"Enter cost of the bag:"<<endl;
cin >>cost_of_bag;
cout <<"Enter area covered by each bag in square feet :"<<endl;
cin >>areasquarefeet;
cost_of_fertilizer=cost_of_bag/size;
cost_per_square_feet=size*areasquarefeet;
cout <<"Cost of Fertilizer per pound:"<<cost_of_fertilizer <<endl;
cout <<"Cost of fertilizing per pound:"<<cost_per_square_feet;






}
