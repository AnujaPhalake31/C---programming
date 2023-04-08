#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
};

class Deried : public Base
{
    public:
        int i,j;
};

int main()
{
    Base *bp = new Base();     
    Deried *dp = new Deried(); 

    Base *bp1 = new Deried();  
    

    return 0;
}
