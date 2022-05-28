#include<iostream>
using namespace std;
int main()
{
    int x=-1;
    //some code
    cout<<"before try "<<endl;
    try{
        cout<<"inside try"<<endl;
        if (x<0)
        {
            throw x;
            cout<<"after throw(never exexcuted)"<<endl;

        }

    }
    catch(int x){
        cout<<"Exception caught"<<endl;
    }
    cout<<"after catch(will be excuted)";
    return 0;
}