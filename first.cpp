#include <iostream>
#include <string>
using namespace std;
class student{
private:
    int marks;
public:
    string name;
    string sclass;
    string rollno;

    void changename(string newname){
        name= newname;
    }
};

int main(){
    student s1;
    s1.name="chirag";
    s1.rollno="2022UEI2819";
    s1.sclass="2+";;
    int a;
    cout<<"enter value to be out"<<endl;
    s1.changename("radhe");

    // cin>>a;
    cout<<s1.name<<endl<<s1.rollno<<endl;

    return 0;


}