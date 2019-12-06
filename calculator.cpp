#include <iostream>

using namespace std;

int main()
{
    int a,b,ch;
    bool exit=false;
    while(!exit)
    {
        cout<<"************MENU************"<<endl;
        cout<<"1. Add\n2. Substract\n3. Multiplication\n4. Division\n5. Exit\nEnter your choice...\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"Enter two no."<<endl;
                cin>>a>>b;
                cout<<"Addition : "<<a+b<<endl;
            }
            break;
            case 2:
            {
                cout<<"Enter two no."<<endl;
                cin>>a>>b;
                cout<<"Substraction : "<<a-b<<endl;
            }
            break;
            case 3:
            {
                cout<<"Enter two no."<<endl;
                cin>>a>>b;
                cout<<"Multiplication : "<<a*b<<endl;
            }
            break;
            case 4:
            {
                cout<<"Enter two no."<<endl;
                cin>>a>>b;
                cout<<"Division : "<<a/b<<endl;
            }
            break;
            case 5:
            {
                exit=true;
            }
            break;
            default:
            cout<<"Invalid choice!!! Try again........"<<endl;
        }
    }
    return 0;
}