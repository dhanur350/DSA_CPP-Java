#include<iostream>
using namespace std;
class classexp
{
    private:
    int age;
public:
    int sno, hit;
    int getAge(){
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
    }
};