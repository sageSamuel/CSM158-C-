#include<iostream>
using namespace std;

int main()
{
    double OverTimeRateMal, OverTimeRateFem, RegularRateMal=500, RegularRateFem=550, Hours, NumChil, GrossPay;
    char Gender;
    OverTimeRateMal=1.5*RegularRateMal;
    OverTimeRateFem=1.5*RegularRateFem;

    cout<<"Number Of Hours Worked: ";
    cin>> Hours;
    cout<<"Gender: M or F: ";
    cin>>Gender;
    cout<<"Number of Children: ";
    cin>>NumChil;

    if (Gender=='M'){
        if(Hours<=40)
            GrossPay=RegularRateMal*Hours;
        else
            GrossPay=RegularRateMal*40+OverTimeRateMal*(Hours-40);

    }
    else{
        if (Hours<=40)
            GrossPay=RegularRateFem*Hours;
        else
            GrossPay=RegularRateFem*40+OverTimeRateFem*(Hours-40);
    }
    double IncomeTax=0.15*GrossPay, NHIlevy=0.025*GrossPay, DistrictTax=0.01*GrossPay, EduFund;

    if(NumChil>3){
        if(Gender=='M')
            EduFund=10*(NumChil-3);
        else
            EduFund=20*(NumChil-3);

    }
    else
        EduFund=0;
    double Netpay=GrossPay-(IncomeTax+NHIlevy+DistrictTax+EduFund);

    cout<<"-------------------------------"<<endl;
    cout<<"Gross Pay: Ghc "<<GrossPay<<endl;
    cout<<"Income Tax: Ghc "<<IncomeTax<<endl;
    cout<<"NHI Levy: Ghc " <<NHIlevy<<endl;
    cout<<endl;
    cout<<"--------NET PAY--------------"<<endl;
    cout<<" Ghc "<< Netpay;

    return 0;

}
