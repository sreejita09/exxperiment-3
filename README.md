# EXPERIMENT 3 

# AIM: 
To study and implement Operators in C++

# software used
VS code 

# THEORY: 
these are basically symbols that operate on operands. 

there are five types of operators in c++ which is also used in the codes 

1. arithmetic operator (+,-,*,/,%,++,--). these are the basic mathematical operators
2. assigment operator(=,+=,-=,*=,/=). these are used to assign value 
3. comparision operator (==,<=,>=,!=). these are relational operators 
4. logical operator (&&,||,!). these are to combine conditional statements 


# arithmetic operators 

#include<iostream>
using namespace std;

int main()

{

    int a,b,sum, sub, mult, div, modulus, incr, decr ; 
    cout<<"enter a value of a: ";
    cin>> a;
    cout<<"enter a value of b: ";
    cin>> b;
    sum = a+b; 
    sub = a-b;
    mult = a*b;
    div = a/b;
    modulus = a%b; 
    cout<< "sum is: "<<sum<<endl; 
    cout<< "subtraction is: "<<sub<<endl;
    cout<< "multiplication is: " << mult<<endl;
    cout<< "division is : "<<div<<endl;
    cout<< "modulus is : "<<modulus<<endl;
    cout<< "increment is: "<<++a<<endl;
    cout<< "decrement is : "<<--b<<endl;

    return 0;
}

![image](https://github.com/user-attachments/assets/b3f57bc1-59bc-4d95-93b0-887e39947c82)

# assignment operators 

#include<iostream>
using namespace std;

int main()

{

    int a=3,b=4,c=5,d=9,e=10 ;
    a+=3;
    cout << "the value of a is: "<<a <<endl;
    b-=5;
    cout<<"the value of b is: "<< b <<endl;
    c*=5;
    cout << "the value of c is: "<< c <<endl; 
    d/=9;
    cout<< "the value of d is: "<< d<< endl;
    e%=9;
    cout<< " the value of e is: "<< e<< endl;
    return 0;
    
}

![image](https://github.com/user-attachments/assets/5544c791-41c0-4998-ab33-620c7ea7df7a)

# comparision operators

#include<iostream>
using namespace std;

int main()
{
    int a,b; 

    cout<<"enter a value of a: ";
    cin>>a;
    cout<<"enter a value of b: ";
    cin>>b;

    if (a==b)
    {
        cout<<"a is equal to b"<<endl; 
    }
    else
    {
        cout<<"a is not equal to b"<<endl; 
    }

    if (a!=b)
    {
        if(a>b)
        {
            cout<<"a is greater than b"<<endl;
        }
        else
        {
            cout<<"a is less than b"<<endl;
        }
    }
        
    
    return 0;
}

![image](https://github.com/user-attachments/assets/6a0be371-9cff-402d-b62b-bb9105acab69)

# logical operators 

#include<iostream>
using namespace std;

int main()
{

    int a,b,c,d, e;
    cout<<"enter the value of a";
    cin>>a; 

    cout<<"enter the value of b";
    cin>>b; 

    c= (a<5 && b<10);
    cout<<"LOGICAL AND: the output: "<< c <<endl; 

    d= (a>4 || b<6);
    cout<< "LOGICAL OR: the output: "<< d<< endl;

    e= !(a>6 && b<5);
    cout<< "LOGICAL NOT: the output: "<< e<<endl;

    return 0;
}

![image](https://github.com/user-attachments/assets/1e37a484-0e34-4458-9572-361215a02273)
