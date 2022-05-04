/*
Personel adında ana sınıftan Memur ve Ogretmen adında iki sınıf türetilecektir. -/

Personel sınıfında adSoyad,tckimlik,maas değişkenleri private olarak saklanmaktadır. -/

Ogretmen sınıfında ek olarak ekders değişkeni yer almaktadır ve bir değer atayınız yada kullanıcıdan alınız.-/

Memur sınıfında ek olarak gorevYeri string olarak saklanmalıdır. -/

Değişkenleri private seçiniz ve get ve set fonksiyonları ile erişiniz. -/

maasGoster fonksiyonu  memur için maaştan %15 vergi kesilerek hesaplanırken, ogretmen için ek ders eklenip ve çıkan değerden %20 kesilerek hesaplanır.

Constructor ve destructor yazarak çalışma sıralarını inceleyiniz.
*/

#include "Ogretmen.h"
#include "Memur.h"

int main(int argc, char const *argv[])
{

    Personel p;

    p.SetAdSoyad("Personel Personeloğulları");
    p.SetTcKimlik("3");
    p.SetMaas(4000);
    p.maasGoster(p);

    std::cout << std::endl;

    Ogretmen o;

    o.SetAdSoyad("Öğretmen Öğretmenoğulları");
    o.SetTcKimlik("15");
    o.SetMaas(5000);
    o.SetEkDers(1000);
    o.maasGoster(o);

    std::cout << std::endl;

    Memur m;
    
    m.SetAdSoyad("Memur Memuroğulları");
    m.SetTcKimlik("8");
    m.SetMaas(4500);
    m.SetGorevYeri("Buca");
    m.maasGoster(m);

    std::cout << std::endl;

    std::cout << "Program bitti..." << std::endl;

    return 0;
}
