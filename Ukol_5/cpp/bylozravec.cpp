#include "bylozravec.hpp"

Bylozravec::Bylozravec(int x, int y, Prostredi *prostredi) : Zvire(x, y, prostredi) {
        energie = 100;
}

void Bylozravec::konzumuj(Organismus *other) {
        if (other->getTyp() == 'R' && energie > other->energie) {
            //consumes Rostlina objects only
            energie += other->energie;
            other->energie = 0;
        }
}

void Bylozravec::rozmnozovani() {
    if (energie > 300) {
        int pocetPotomku = rand() % 4;

        for (int i = 0; i < pocetPotomku; ++i) {
            prostredi->pridejOrganismus<Bylozravec>(x, y);
            energie /= 2;
        }
    }
}

char Bylozravec::getTyp() {
    return 'B';
}