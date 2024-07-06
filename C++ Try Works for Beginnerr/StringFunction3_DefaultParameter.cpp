#include <iostream>
using namespace std;

void myfunction(string country="Norway" ){
    cout<< country<<" is my country\n";
}
int main(){
    myfunction("Ghana");
    myfunction("USA");
    myfunction("Israel");
    myfunction("UK");
    myfunction("Bahamas");
    myfunction("Russia");
    myfunction("Rwanda");
    myfunction();
return 0;
}