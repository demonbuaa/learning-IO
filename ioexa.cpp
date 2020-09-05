#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Print
{
    public: 
       Print(const string _prefix);
       void print(const string info)const;
       void prefixUpdate(const string _prefix);
    private:
       string prefix;
       
};

Print::Print(const string _prefix)
{
    prefix = _prefix;
}

void Print::print(const string info) const
{
    cout << prefix + "  " + info << endl;
}

void Print::prefixUpdate(const string _prefix)
{
     prefix = _prefix;
}


int main()
{
    Print p1("I love");
    p1.print("Huyun");

    p1.prefixUpdate("I hate");
    p1.print("Huyun");
    
    return 0;
}