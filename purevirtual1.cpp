#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
    
        void fun()        
        {
            cout<<"Base fun\n";
        }
    
        virtual void gun()      
        {
            cout<<"Base gun\n";
        }

         virtual void sun()    
        {
            cout<<"Base sun\n";
        }
    
        virtual void run() = 0;     
};

class Derived : public Base
{
    public:
        int i,j;

    void fun()       
    {
        cout<<"Derived fun\n";
    }
    
     virtual void gun()     
    {
        cout<<"Derived gun\n";
    }

    void run()     
    {
        cout<<"Derived run\n";
    }
};

int main()
{
    Derived dobj;       

    Base *bp = NULL;
    bp = &dobj;             

     cout<<sizeof(Base)<<"\n";        
     cout<<sizeof(Derived)<<"\n";       

     bp->fun();         
     bp->gun();         
     bp->sun();           
     bp->run();            

    return 0;
}
