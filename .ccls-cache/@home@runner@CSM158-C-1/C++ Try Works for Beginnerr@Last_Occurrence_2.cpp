#include <iostream>
using namespace std;

int main()
{
    int setLength, Number;
    int LastOccurrence=-1;

    cout<<"Enter the Length of the set: "<<endl;
    cin>> setLength;

    while(setLength<=0){
        cout<<"Invalid input. Enter a positive number";
        cin>>setLength;
    }
    int setArray[setLength];
    cout<<"Enter the numbers in the set: "<<endl;
    for(int i=0; i< setLength; i++){
        cout<< "Enter number "<< i+1<<"\t\t " ;
        cin>> setArray[i];
    }
    cout<<"Enter the number to search for in the set: ";
    cin>> Number;

    for(int i=0; i<setLength; i++){
        if (setArray[i]==Number){
            LastOccurrence= i;
        }

        }
        if (LastOccurrence==-1){
            cout<<"The number "<<Number<<" was not found in the set"<<endl;
            }
            else{
                cout<<"The position of last occurrence: "  << LastOccurrence+1<<endl;
            }

return 0;
}
