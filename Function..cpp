#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int roll;
    Person(string name,int roll){
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout << "Hello from " << name << endl;

    }
};

int main() {
    Person era("ISRAT ERA",137);
    era.hello();

    return 0;
}