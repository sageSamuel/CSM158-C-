#include <iostream>
using namespace std;

int age;
int ages[5];
int main(){



    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter your age: ";
        cin>>ages[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"You are "<<ages[i]<<" years olds!\n";
    }


    return 0;
}