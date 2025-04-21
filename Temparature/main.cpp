#include <iostream>

using namespace std;


int main()
{
    int num;
    char ch;
    int result;
    int celsius;
    int fahrenheit;

    cout<<"Enter C or F to know Celsius and Fahrenheit:[F/C]:  ";
    cin>>&ch;

    switch(ch){
        case 'C':
        case 'c':
            cout<<"Enter your Fahrenheit value: ";
            cin>>fahrenheit;
            result = (5*(fahrenheit-32))/9;
            cout<<"The Temperature is "<<result<<endl;
            break;

        case 'F':
        case 'f':
            cout<<"Enter your Celsius value: ";
            cin>>celsius;
            result = ((9*celsius)/5)+32;
            cout<<"The Temperature is "<<result<<endl;
            break;
        default:
            cout<<"Invalid Value!"<<endl;
            return 0;
    }
    return 0;

}
