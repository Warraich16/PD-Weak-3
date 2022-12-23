#include <iostream>
using namespace std;
int main()
{
float vegetableprice;
float fruitprice;
int kilograms_vege;
int kilograms_fruits;
float total;
float fuit_cost;
float vegetable_cost; 
cout <<"Vegetable price per kilogram:"<<endl;
cin >>vegetableprice;
cout <<"Fruit price per kilogram:"<<endl;
cin >>fruitprice;
cout <<"Enter the number of kilograms for vegetables:"<<endl;
cin >>kilograms_vege;
cout <<"Enter the number of kilograms for fruits:"<<endl;
cin >>kilograms_fruits;
vegetable_cost=vegetableprice*kilograms_vege;
fuit_cost=fruitprice*kilograms_fruits;
total=(fuit_cost+vegetable_cost)/1.94;
cout <<"The earnings of all fruits is:"<<total;
 









}