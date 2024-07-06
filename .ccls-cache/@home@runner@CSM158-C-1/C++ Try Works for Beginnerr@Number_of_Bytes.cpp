#include <iostream>

using namespace std;

int main()
{
    int a=1;
    long int b=1;
    float c=1.0;
    double d=1.0;
    long double e=1.0;
    bool z= true;
    char ch='A';
    cout <<"Bytes required by int is "<<sizeof(a) <<endl;
    cout <<"Bytes required by long int is "<<sizeof (b)<<endl;
    cout <<"Bytes required by float is "<<sizeof (c)<<endl;
    cout <<"Bytes required by double is "<<sizeof (d)<<endl;
    cout <<"Bytes required by char is "<<sizeof (ch)<<endl;
    cout <<"Bytes required by bool is "<<sizeof (z)<<endl;
    return 0;
}
