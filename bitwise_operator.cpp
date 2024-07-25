//Sreejita Bhardwaj 
//Prn: 23070123130 
//experiment 3: opertators 

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the value of a ";
    cin>>a; 
    
    cout<<"enter the value of b: ";
    cin>>b; 

    cout<< "the bitwise AND is: "<<(a&b)<<endl;
    cout<< "the bitwise OR is: "<<(a|b)<<endl;
    cout<< "the bitwise XOR is: "<<(a^b)<<endl;
    cout<< "the bitwise NOT is: "<< (a-b)<<endl;
    cout<< "the bitwise LEFT SHIFT is: "<<(a<<b)<<endl;
    cout<< "the bitwise RIGHT SHIFT is: "<< (a>>b)<<endl;

    return 0; 
}