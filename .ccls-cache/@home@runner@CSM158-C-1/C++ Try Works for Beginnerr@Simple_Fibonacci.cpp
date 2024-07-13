#include <iostream>
using namespace std;

int main(){
    int FirstNum, SecNum, set;

    cout<<"Enter the size of the set: "<<endl;
    cin>> set;
    cout<< "Enter the first two terms: "<<endl;
    cin>> FirstNum;

    cin>>  SecNum;
    int nextNum= FirstNum + SecNum;
    cout<< FirstNum<<" "<<SecNum<<" "<<nextNum;

    for(int i=3; i<set; i++){
        FirstNum=SecNum;
        SecNum=nextNum;
        nextNum= FirstNum+SecNum;
        cout<< " " << nextNum<<" ";

    }
    return 0;
}