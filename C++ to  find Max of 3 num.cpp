#include<stdio.h>
#include<iostream>
using namespace std;

int max(int num1,int num2,int num3){
    if(num1>=num2 && num1>=num3){
        return num1;
    }
    else if(num2>=num1 && num2>=num3){
        return num2;
    }
    else{
        return num3;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter the three numbers:-";
    cin>>a>>b>>c;
    cout<<"The maximum number is "<<max(a,b,c);
    return 0;
}
