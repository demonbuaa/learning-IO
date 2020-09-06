#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream fout("chenzhi.txt", ios::app);

    char input;

    cin >> noskipws >> input;
    while(1)
    {
       fout << input;
       cin >> input;
       cout << input;
       if(input == ':')
       {
          cout << "quit" << endl;
          break;
       }
    }
    fout << flush;
    fout.close();

    return 0;
}