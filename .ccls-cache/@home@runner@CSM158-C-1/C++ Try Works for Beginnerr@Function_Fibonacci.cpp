#include <iostream>
using namespace std;

void fib(int fNum, int SecNum, int set){
    int a=fNum;
    int b=SecNum;

    cout<<a<<" "<<b<<" ";

    for (int i=3; i<=set; i++){
        int next= a+b;
        cout<< next<<" ";
        a=b;
        b=next;
    }
    cout<<endl;
}

int main(){
    int fNum, SecNum, set;
    cout<<"Enter the first term: ";
    cin>> fNum;
    cout<<"Enter the second term: ";
    cin>> SecNum;
    cout<<"Enter the number of terms: ";
    cin>> set;

    fib(fNum,SecNum,set);
    return 0;
}