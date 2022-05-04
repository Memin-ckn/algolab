#ifndef OGRETMEN_H
#define OGRETMEN_H

#include "Personel.h"

class Ogretmen : public Personel
{
private:
    float ekDers;

public:
    //  Getters
    float GetEkDers();

    //  Setters
    void SetEkDers(float ekDers);

    // Constructors and Destructors
    Ogretmen();
    ~Ogretmen();

    // Methods
    void maasGoster();
    void maasGoster(Ogretmen);
};

//  Getters
float Ogretmen::GetEkDers() { return ekDers; }

//  Setters
void Ogretmen::SetEkDers(float ekDers)
{
    this->ekDers = ekDers;
}

// Constructors and Destructors
Ogretmen::Ogretmen()
{
    std::cout << "Öğretmen nesnesi oluşturuldu." << std::endl;
}

Ogretmen::~Ogretmen()
{
    std::cout << "Öğretmen nesnesi silindi." << std::endl;
}

// Methods

void Ogretmen::maasGoster()
{
    SetMaas(GetMaas() + ekDers);
    std::cout << "Bu öğretmenin maaşı: " << GetMaas() - GetMaas() * 20 / 100 << std::endl;
}
void Ogretmen::maasGoster(Ogretmen o)
{
    SetMaas(GetMaas() + ekDers);
    std::cout << o.GetAdSoyad() << "'nın maaşı: " << GetMaas() - GetMaas() * 20 / 100 << std::endl;
}

#endif // !OGRETMEN_H
