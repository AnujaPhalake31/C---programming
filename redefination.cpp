#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;

        void fun()     
        {
            cout<<"Inside fun\n";
        }
        void gun() 
        {
            cout<<"Inside gun\n";
        }
};
class Hello : public Demo
{
    public:
        int x,y;

        void sun()      
        {
            cout<<"Inside sun\n";
        }

        void gun(int n)    
        {
            cout<"Inside gun of child\n";
        }
};

int main()
{
    return 0;
}
