#include<iostream>
using namespace std;

class computer{
    public:
    string brand="Lenovo";

    void specification(){
        cout<<"good performance"<<"\n";
    }
};

class laptop:public computer{
    public:
    string compony="dell \n";
};

int main(){
    laptop myobj;
    myobj.specification();
    cout<< myobj.brand + " " + myobj.compony;

    return 0;
}
