#include<iostream>
#include<string.h>
using namespace std;
class CString{
    private:
        char str[20];
    public:
    void getstring(){
        cin>>str;
    } 
    void display(){
        cout<<str;
    }
    CString operator+(CString x){
        CString s;
        strcpy(s.str,str);
        strcat(s.str,x.str);
        return s;
    } 
    int operator==(CString &t){
        for(int i=0;str[i]!='\0';i++){
            for(int j=0;str[j]!='\0';j++){
                if(str[i]==t.str[j]){
                    return 0;
                }
                else{
                    return 1;
                }

            }
        }

    }  
};
int main(){
    CString str1,str2,str3;
    str1.getstring();
    str2.getstring();
    str3=str1+str2;
    str3.display();
    cout<<endl;
    int result=0;
    result=str1==str2;
    if(result==0){
        cout<<endl<<"both strings are equal";
    }
    else{
        cout<<"both are not equal";
    }
    return 0;
}

