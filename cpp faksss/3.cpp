//check integer for prime

#include <iostream>
using namespace std;
int main()
{
    int number,flag=0,i;
    cout<<"Enter the number you want to determine if prime or not";
    cin>>number;
    for(i=2;i<=number/2;i++)
    {
        if(number%i==0){
            flag++;
            break;
        }

    }
    if(flag==0){
        cout<<"Prime number\n";

    }
    else
    {
        cout<<"Not Prime number\n";
    }
    return 0;
}







