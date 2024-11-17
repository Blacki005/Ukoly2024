#ifndef ZVIRE_H
#define ZVIRE_H

#include "organismus.hpp"

#include <algorithm>
#include <random>

class Zvire : public Organismus
{
public:
    Zvire(int x, int y, Prostredi *prostredi);
    ~Zvire() {};

    void pohyb() override;
    void metabolismus() override;
    virtual void rozmnozovani() = 0;
    virtual void konzumuj(Organismus *other) = 0;
};

#endif