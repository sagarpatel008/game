#include <iostream>
using namespace std;

int main()
{
    int sum=0 ,n, i;

    while ( true)
    {
        cout<<"guess the number :";
        cin>>n;

        if ( n<=19)
        {
            cout<<"your guess is lower than the number\nsorry! please guesss it again "<<endl;
        }
    else if( n>20)
    {
        cout<<"your guess is greater than the number\nsorry! please guess it again"<<endl;
    }
    else
    {
        cout<<"congrats! you guessed the number\n number of trails :"<<sum<<endl;
        break;
    }
    sum= sum + 1;
cout<<endl;
    }
    return 0;
}
