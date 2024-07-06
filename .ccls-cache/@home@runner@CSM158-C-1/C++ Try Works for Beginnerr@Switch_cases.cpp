#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout<< "Menu:" <<endl;
        cout<< "1.Say Hello" <<endl;
        cout<< "2.Say Goodbye"<<endl;
        cout<< "3.Tell a joke"<<endl;
        cout<< "4.Give a compliment"<<endl;
        cout<< "5.Exit" <<endl;
        cout<< "Enter your choice(1-5): "<<endl;
        cin>> choice;

    switch(choice)  {
        case 1:
    cout<<"Hello there" <<endl;
    break;
        case 2:
    cout<<"Goodbye! Have a nice day"
    break;
        case 3:
    cout<<"Even Impossible says I'm possible"<<endl;
    break;
        case 4:
    cout<<"You have a nice hair"<<endl;
    break;
        case 5:
    cout<<"Exiting..."<<endl;
    break;
    default:
    cout<<"Invalid choice, please enter  number between 1 and 5."<<endl;
    break;
    }
    } while(choice !=5);

    return 0;
    }