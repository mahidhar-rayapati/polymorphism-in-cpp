#include <iostream>

class degree
{
    public:
        degree();
        virtual void printDegree()=0;
};

class undergraduate: public degree
{
    public:
        void printDegree();
};

class postgraduate: public degree
{
    public:
        void printDegree();
};

degree:: degree()
{
    std::cout<<"\nI got a degree...\n";
}

void undergraduate:: printDegree()
{
    std::cout<<"I'm undergraduate...\n";
}

void postgraduate:: printDegree()
{
    std::cout<<"I'm postgraduate...\n";
}

int main()
{
    degree* obj;
    std::cout<<"1.undergraduate\n";
    std::cout<<"2.postgraduate\n\n";
    int x;
    std::cin>>x;
    switch(x)
    {
        case 1: {
            obj=new undergraduate();
            obj->printDegree();
            break;
        }
        case 2: {
            obj=new postgraduate();
            obj->printDegree();
            break;
        }
        default: {
            std::cout<<"enter valid input...\n";
        }
    }
    return 0;
}