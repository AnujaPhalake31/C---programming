#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo() : j(20)
        {
            i = 10;
        }

        Demo(int a, int b) :i(a), j(b)
        {
            cout<<"Inside parametrised\n";
        }
};

int main()
{
   Demo obj(11,21);

   cout<<obj.i<<"\n";
   cout<<obj.j<<"\n";

   obj.i++;
   cout<<obj.i<<"\n";

    return 0;
}
