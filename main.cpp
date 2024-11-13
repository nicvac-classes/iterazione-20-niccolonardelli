#include <iostream>
using namespace std;
int main()
{
    int blocchi, altezza, piano;
    cout << "quanti blocchi hai a disposizione?" << endl;
    altezza = 0;
    cin>>blocchi;
    if (blocchi >=1)
    {
        altezza = altezza + 1;
        if (blocchi >=3)
        {
           
            altezza = altezza + 1;            
            if (blocchi>=6)
            {
                altezza = altezza + 1;
                blocchi = blocchi - 6;
            }
            else
            {
                cout << " altezza = " << altezza << endl;
            }
        }
        else
        {
            cout << " altezza = " << altezza << endl;
        }

    }
    else 
    {

    }
    piano = 3;
    while (blocchi >=2)
    {
        if (blocchi >= piano + 2)
        {
            blocchi = blocchi -piano-2;
            altezza = altezza + 1;
            piano = piano + 2;
        }
        else
        {
            blocchi = 0;
        }
    }
    cout << " altezza = " << altezza << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
