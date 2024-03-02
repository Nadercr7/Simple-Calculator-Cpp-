#include<iostream>
using namespace std;
int main()
{
    float numOne, numTwo, res;
    int choice;
    do
    {
        cout<<"1. Sum\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"Enter Your Choice(1-4): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>numOne>>numTwo;
        }
        switch(choice)
        {
            case 1:
                res = numOne+numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 2:
                res = numOne-numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = numOne*numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 4:
                if (numTwo != 0){
                res = numOne/numTwo;
                cout<<"\nResult = "<<res;
                break;
                }
                else cout << "Error";
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
    }while(choice!=5);
    cout<< endl;
    return 0;
}