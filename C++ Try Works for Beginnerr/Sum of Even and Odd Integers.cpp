#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, sumEven=0,sumOdd=0;
    cout<<"Enter the number:";
    cin>>n;

    if(n>0){
        sumEven=n*(n+1);
        sumOdd=pow(n,2);
    }
    cout<<"The sum of first " <<n <<" even integers is "  <<sumEven<<endl;
    cout<<"The sum of the first " <<n <<" odd integers is " <<sumOdd<<endl;
    return 0;
}
