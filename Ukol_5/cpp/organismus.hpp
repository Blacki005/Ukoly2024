#ifndef ORGANISMUS_H
#define ORGANISMUS_H

//forward declaration to avoid cyclic reference
class Prostredi;

class Organismus
{
public:
    int x, y;
    int energie;
    Prostredi *prostredi;

    Organismus(int x, int y, Prostredi *prostredi);
    //virtual destructor is necessary because slaves will be deleted by pointer to this master class (yes, MASTER and SLAVE is still used)
    virtual ~Organismus() {};

    virtual void pohyb() = 0;
    virtual void metabolismus() = 0;
    virtual void rozmnozovani() = 0;
    virtual bool jeZivy();
    virtual void konzumuj(Organismus *other) = 0;
    
    //static_cast<>() cannot be used to determine the data type pointer is pointing to
    virtual char getTyp() = 0;
};

#endif