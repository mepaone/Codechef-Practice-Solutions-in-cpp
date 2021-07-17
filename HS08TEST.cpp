#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float bal;
    int am;
//    When You are Submitting No need of Cout.
    cout<<"Enter ammont and Present balance:";
    cin>>am>>bal;
    cout<<fixed<<setprecision(2);
    if(int(am)%5==0 && (am+0.50)<bal){
        double total=(bal-(am+0.50));
        cout<<total<<endl;
    }
    else{
        cout<<bal<<endl;
    }
    return 0;
}