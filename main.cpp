/*
    1. Döngülerle çizilen şekillerden (1. kaynak) 3 tanesini kodlayınız (bir tanesi harflerle yada sayılarla olmalı).

    2. Kullanıcıya permütüasyon mu kombinasyon mu (P/C ?) soran ve sonrasında aldığı sayılara göre işlem yapan kodu yazınız
    (n>=r ve n,r>0 şartı kontrol edilmeli).
*/

// Şekiller

#include <iostream>

void sekiller();
void islem();
int faktoriyel(int);
double permutasyon(int, int);
double kombinasyon(int, int);

int main(int argc, char const *argv[])
{
    sekiller();
    islem();
    return 0;
}

void islem()
{

    // C(n,r) = n! / r!(n-r)!
    // P(n,r) = n! / (n-r)!

    char secim;
    int n, r;
    double sonuc;

    std::cout << "Permütasyon mu Kombinasyon mu? (P/C)" << std::endl;
    std::cin >> secim;

    if (secim == 'P' || secim == 'p')
    {
        permutasyon(n, r);
    }
    else if (secim == 'C' || secim == 'c')
    {
        kombinasyon(n, r);
    }
    else
    {
        std::cout << "Hatalı giriş yaptınız." << std::endl;
    }
}

int faktoriyel(int n)
{
    int fakt = 1;
    for (int i = 1; i <= n; ++i)
    {
        fakt *= i;
    }
    return fakt;
}

double permutasyon(int n, int r)

{
    // P(n,r) = n! / (n-r)!
    std::cout << "İşlem yapılacak sayıları giriniz: (n ve r)" << std::endl;
    std::cin >> n >> r;

    if (!(n >= r))
    {
        std::cout << "n sayısının r'den büyük veya r'ye eşit olması gerekmektedir." << std::endl;
    }
    else if (!(n > 0) || !(r > 0))
    {
        std::cout << "Girilen sayıların sıfırdan (0) büyük olması gerekmektedir." << std::endl;
    }

    std::cout << "İşlemin sonucu: " << (faktoriyel(n)) / (faktoriyel(n - r)) << std::endl;
    return (faktoriyel(n)) / (faktoriyel(n - r));
}

double kombinasyon(int n, int r)
{
    // P(n,r) = n! / (n-r)!
    // C(n,r) = n! / r!(n-r)!
    std::cout << "İşlem yapılacak sayıları giriniz: (n ve r)" << std::endl;
    std::cin >> n >> r;

    if (!(n >= r))
    {
        std::cout << "n sayısının r'den büyük veya r'ye eşit olması gerekmektedir." << std::endl;
    }
    else if (!(n > 0) || !(r > 0))
    {
        std::cout << "Girilen sayıların sıfırdan (0) büyük olması gerekmektedir." << std::endl;
    }
    std::cout << "İşlemin sonucu: " << (faktoriyel(n)) / (faktoriyel(n - r)) / faktoriyel(r);
    return (faktoriyel(n)) / (faktoriyel(n - r))/ faktoriyel(r);
}

void sekiller()
{
    const int boyut = 10;

    for (int i = 0; i < boyut; i++) // Üçgen başlangıç
    {
        char sayi = 65;
        for (int j = 0; j < i; j++)
        {
            std::cout << sayi++ << " ";
        }
        std::cout << std::endl;
    } // Üçgen bitiş

    std::cout << std::endl;

    for (int i = 0; i < boyut; i++) // Boş üçgen başlangıç
    {
        for (int j = 0; j < i; j++)
        {
            if (i == boyut - 1)
            {
                std::cout << "* ";
            }

            else if (j == 0 || j == i - 1)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    } // Boş üçgen bitiş

    std::cout << std::endl;

    for (int i = boyut; i > 0; i--) // Ters piramit başlangıç
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    } // Ters piramit bitiş

    std::cout << std::endl;
}
