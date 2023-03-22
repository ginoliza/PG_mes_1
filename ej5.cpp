#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

using namespace std;

struct fecha_nac
{
    int dia;
    int mes;
    int año;

    fecha_nac(int d, int m, int a)
    {
        this->dia = d;
        this->mes = m;
        this->año = a;
    }

    friend bool operator<(const fecha_nac &a, const fecha_nac &b)
    {
        if (a.mes != b.mes)
        {
            // meses de nacimiento ascendentes
            return a.mes < b.mes;
        }
        else if (a.dia != b.dia)
        {
            // fecha de nacimiento ascendente
            return a.dia < b.dia;
        }
        else
        {
            // edad ascendente
            return a.año > b.año;
        }
    }
};

int main()
{
    fecha_nac p1(1, 1, 1994);
    fecha_nac p2(1, 1, 1993);
    fecha_nac p3(1, 1, 1992);
    vector<fecha_nac> nacim = {p1, p2, p3};
    sort(begin(nacim), end(nacim));    
    for(int i=0;i<nacim.size();i++)
        cout << nacim[i].dia << " " << nacim[i].mes << " " << nacim[i].año << "\n";
    return 0;
}
