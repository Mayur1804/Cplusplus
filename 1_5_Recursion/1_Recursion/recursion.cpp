#include <iostream>
using namespace std;

int baseNumber = 1;

void f(){

    if (baseNumber==10)
    {
        cout<<"limit reached";
        return;
    }
    cout<< baseNumber << endl;
    baseNumber++;
    f();
}


int main(){
    f();

}

