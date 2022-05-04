#ifndef PERSONEL_H
#define PERSONEL_H

#include <iostream>
#include <string>

class Personel
{
private:
    std::string adSoyad;
    std::string tcKimlik;
    float maas;

public:
    //  Getters
    std::string GetAdSoyad();
    std::string GetTcKimlik();
    float GetMaas();

    // Setters
    void SetAdSoyad(std::string adSoyad);
    void SetTcKimlik(std::string tcKimlik);
    void SetMaas(float maas);

    // Constructors and Destructors
    Personel();
    ~Personel();

    // Methods
    void maasGoster();
    void maasGoster(Personel);
};

//  Getters
std::string Personel::GetAdSoyad() { return adSoyad; }
std::string Personel::GetTcKimlik() { return tcKimlik; }
float Personel::GetMaas() { return maas; }

// Setters
void Personel::SetAdSoyad(std::string adSoyad)
{
    this->adSoyad = adSoyad;
}
void Personel::SetTcKimlik(std::string tcKimlik)
{
    this->tcKimlik = tcKimlik;
}
void Personel::SetMaas(float maas)
{
    this->maas = maas;
}

// Constructors and Destructors
Personel::Personel()
{
    std::cout << "Personel nesnesi oluşturuldu." << std::endl;
}

Personel::~Personel()
{
    std::cout << "Personel nesnesi silindi." << std::endl;
}

// Methods
void Personel::maasGoster()
{
    std::cout << "Bu personel maaşı: " << maas << std::endl;
}
void Personel::maasGoster(Personel p)
{
    std::cout << p.GetAdSoyad() << "'nın maaşı: " << maas << std::endl;
}

#endif // !PERSONEL_H
