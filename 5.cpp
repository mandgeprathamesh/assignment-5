#include<iostream>
using namespace std;
    class Numbers{
    private:
        int x,y,z;
    public:
    void getnumbers(){
        cout<<"enter three numbers:"<<endl;
        cin>>x>>y>>z;
    }
    void showdata(){
        cout<<"after negation :";
        cout<<x<<"\n"<<y<<"\n"<<z<<endl;
    }
    void operator-(){
        x=-x;
        y=-y;
        z=-z;
    }
};
int main(){
    Numbers num;
    num.getnumbers();
    -num;
    num.showdata(); 
}