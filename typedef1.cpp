#include<iostream>
using namespace std;

int main()
{
    struct Demo
    {
        int no1;
        int no2;
    };

    typedef struct Demo DEMO;
    typedef struct Demo * PDEMO;
    typedef struct Demo ** PPDEMO;

    typedef struct Demo
    {
        int no1;
        int no2;
    }DEMO, *PDEMO, **PPDEMO;

    DEMO obj;

    PDEMO p = &obj;

    PPDEMO q = &p;

    return 0;
}
















