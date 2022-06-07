#include<iostream>
using namespace std;
class classexp
{
    private:
    int age;
    public:
    int sno, hit;
    /*int getAge(){
        cin>>age;
        return age;
    }
    int setAge(int a,int password){
        if (password!=123)
        {
            return 0;
        }
        if(a<0){
            return 0; 
        }
        age = a;
        return age;
    }*/
    //Default constructor
    classexp(){
        cout<<"Default constructor inside\nIt'll return nothing";
    }
    //Parameterized constructor
    classexp(int a,int r){
        a=10;
        age = a;
        r=50;
        hit = r;
        cout<<"Parameter Constructor called";
    }
    //Copy Constructor
    classexp(classexp &exp){
        int a = exp.age;
        int r = exp.hit; 
    }
    float claculate(){
        return age*hit;
    }
};