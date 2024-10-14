#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    char car_type;
    int days;
    double total;
    cout<<"Which car type (A, B, C, or D) would you like to rent?"<<endl;
    cin>>car_type;
    cout<<"How many days would you like to rent this car?"<<endl;
    cin>>days;
    
    if(days < 1)
    {
        cout<<"Please enter valid input."<<endl;
        return 0;
    }
    if (car_type == 'A')
    {
        total = 1.23 * (80 + 15*days);
    }else if (car_type == 'B')
    {
        total = 1.23 * (110 + 25*days);
    }else if(car_type == 'C')
    {
        total = 1.23 * (160 + 35*days);
    }else if(car_type == 'D')
    {
        total = 1.23 * (220 + 45*days);
    }else
    {
        cout<<"Please enter valid input."<<endl;
        return 0;
    }
    cout<<fixed<<setprecision(2);
    cout<<"Your total is $"<<total<<endl;
    return 0;
}   