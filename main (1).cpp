#include <iostream>
#include <string>
using namespace std;

class menu
{
    public:
    void body ()
    {
        
        cout << "1- Espresso - 60, 75, 100" << endl;
        cout << "2- Cappuccino - 80, 90, 125 " << endl;
        cout << "3- Latte - 100, 125, 150 " << endl;
        cout << "To confirm your order please choose any option" << endl;
        cout << "Add on" << endl;
        cout << "1- milk" << endl;
        cout << "2- cream" << endl;
        cout << "3- Latte" << endl;
        
    }
    
};

int main ()
{
    menu x;
    x.body();
    int option, price,visa, addon;
    
    
    cin >> option;
    cin >> addon;
    
    switch(option)
    {
    case 1:
    switch(addon){
        case 1:
        cout << "please pay Rs 60" << endl;
        break;
        
        case 2:
        cout << "please pay Rs 75" << endl;
        break;
        
        case 3:
        cout << "please pay Rs 100 " << endl;
        break;
    }
    cout << "enter your password for payment" << endl;
    cin >> visa;
    
    if(visa == 12345){
        cout << "your order has been confirmed";
    }
    else
        cout << "you have entered wrong pin";
    break;
    
    case 2:
    switch(addon){
        case 1:
        cout << "please pay Rs 80" << endl;
        break;
        
        case 2:
        cout << "please pay Rs 90" << endl;
        break;
        
        case 3:
        cout << "please pay Rs 125 " << endl;
        break;
    }
    cout << "enter your password for payment" << endl;
    cin >> visa;
    
    if(visa == 12345){
        cout << "your order has been confirmed";
    }
    else
        cout << "you have entered wrong pin";
    break;
    
    case 3:
    switch(addon){
        case 1:
        cout << "please pay Rs 100" << endl;
        break;
        
        case 2:
        cout << "please pay Rs 125" << endl;
        break;
        
        case 3:
        cout << "please pay Rs 150 " << endl;
        break;
    }
    cout << "enter your password for payment" << endl;
    cin >> visa;
    
    if(visa == 12345){
        cout << "your order has been confirmed";
    }
    else
        cout << "you have entered wrong pin";
    break;
    
    default:
    cout << "Error"<< endl;
    break;
    
    return 0;
    }
}
