#ifndef MEMUR_H
#define MEMUR_H

#include "Personel.h"

class Memur : public Personel
{
private:
    std::string gorevYeri;

public:
    //  Getters
    std::string GetGorevYeri();

    //  Setters
    void SetGorevYeri(std::string gorevYeri);

    // Constructors and Destructors
    Memur();
    ~Memur();

    // Methods
    void maasGoster();
    void maasGoster(Memur);
};

//  Getters
std::string Memur::GetGorevYeri() { return gorevYeri; }

//  Setters
void Memur::SetGorevYeri(std::string gorevYeri)
{
    this->gorevYeri = gorevYeri;
}

// Constructors and Destructors
Memur::Memur()
{
    std::cout << "Memur nesnesi oluşturuldu." << std::endl;
}

Memur::~Memur()
{
    std::cout << "Memur nesnesi silindi." << std::endl;
}

// Methods

void Memur::maasGoster()
{
    std::cout << "Bu memurun maaşı: " << GetMaas() - GetMaas() / 15 * 100 << std::endl;
}
void Memur::maasGoster(Memur m)
{
    std::cout << m.GetAdSoyad() << "'nın maaşı: " << GetMaas() - GetMaas() * 15 / 100 << std::endl;
}

#endif // !MEMUR_H
