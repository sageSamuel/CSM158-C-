#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout<<"Enter the number of integers you want to find their square root: "<<endl;
    cin>>n;

    int num[n];
    int x;
    for (int i=0; i<=n; i++){
        do{
            cout<<"Enter the integer: "<<endl;
            cin>>x;
        }
        while(x<0);
        num[i]=x;
    }

    cout << "Number\t\tSquare Root" << endl;
    cout << "-------------------------------------" << endl;


    for(int i = 1; i<=n; i++) {
        double sqrtValue = sqrt(num[i]);
        cout << num[i] << "\t\t" << sqrtValue << endl;
    }

    return 0;
}
