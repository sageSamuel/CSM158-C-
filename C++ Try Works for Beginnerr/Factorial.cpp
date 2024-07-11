// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int Fact(int m){
    int fact=1;
    for (int i=1; i<=m; i++){
        fact= fact*i;
    }
        return fact;
}
int main() {
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;

    Fact(x);
   int  result= Fact(x);
    cout<<"the factorial of "<<x<<" is "<<result;


    return 0;
}