// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void myfunction(string fname);
int main() {
    myfunction("Ghana");
    myfunction("Togo");
    myfunction("Guinea");
    return 0;
}
void myfunction(string fname){
    cout<<fname<<" is an African country!"<<endl;
}