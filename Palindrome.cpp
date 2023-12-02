#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int j=n;
    //Reverse a number
    int rev=0;
    while (n!=0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"Reverse of the number is: "<<rev<<endl;
    // cout<<rev-j;
    
    if(rev-j==0){
        cout<<"The number is Palindrome: "<<j;
    }
    else{
        cout<<"The number is not Palindrome"<<j;
    }

    return 0;
}