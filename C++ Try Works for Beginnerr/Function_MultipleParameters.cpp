#include <iostream>
using namespace std;

void myfunction(string family, int age){
    if (family=="Benjamin"){
        cout<<family<<" Brefo was "<< age<< " years old"<< endl;
    }
    else{
        cout<<family<< " Brefo is "<<age<< " years old"<< endl;
    }
}
int main(){
    myfunction("Benjamin",52);
    myfunction("Joyce",52);
    myfunction("Ernest",31);
    myfunction("Samuel", 21);
return 0;
}