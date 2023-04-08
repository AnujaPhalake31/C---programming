#include<iostream>
using namespace std;

class Demo
{
        int i;
    public:
        int x;
     private:
        int y;
     public:
        Demo()
        {
            x = 10;
            y = 20;
            i = 30;
        }

        void fun()
        {
            cout<<"Inside public fun\n";
            cout<<y;        
            gun();
         }
    private:
        void gun()
        {
            cout<<"Inside private gun\n";
            cout<<y;        
        }
};


int main()
{
    Demo obj;

    cout<<obj.x<<"\n";      
    obj.fun();                      

    return 0;
}
