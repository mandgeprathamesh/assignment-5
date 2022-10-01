#include<iostream>
using namespace std;
class complex{
    private: int a,b;
    public:
    void accept(){
        cout<<"enter numbers:";
        cin>>a>>b;
    }
    void showdata(){
        cout<<a<<"+"<<b<<"i";
    }
    friend complex operator-(complex c1,complex c2);
};
complex operator-(complex c1,complex c2){
    complex c;
    c.a=c1.a-c2.a;
    c.b=c1.b-c2.b;
    return c;
}
int main(){
    complex c1,c2,c3;
    c1.accept();
    c2.accept();
    c3=c1-c2;
    cout<<"the sum is:",c3.showdata();
}