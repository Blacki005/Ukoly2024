#include "rostlina.hpp"
#include "prostredi.hpp"

Rostlina::Rostlina(int x, int y, Prostredi *prostredi) : Organismus(x, y, prostredi) {
    energie = 10;
}

void Rostlina::metabolismus()
{
    energie += 1;
}

void Rostlina::rozmnozovani()
{
    if (energie > 30)
    {
        int pocetPotomku = rand() % 10;

        for (int i = 0; i < pocetPotomku; ++i)
        {
            prostredi->pridejOrganismus<Rostlina>();
            energie /= 2;
        }
    }
}

char Rostlina::getTyp() {
    return 'R';
}

void Rostlina::konzumuj(Organismus *other) {
    //silence unused parameter warning
    (void)other;
}