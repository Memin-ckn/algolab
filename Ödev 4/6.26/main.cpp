/*
6.26 (Celcius ve Fahrenayt Hesabı) Aşağıdaki işlemleri gerçekleyen fonksiyonları yazınız:
    a) Girilen Fahrenayt değerinin Celcius karşılığını bulan Celcius isimli fonksiyon
    b) Girilen Celcius değerinin Fahrenayt karşılığını bulan Fahrenheit isimli fonksiyon
    c) a ve b şıklarında oluşturduğunuz kod parçalarını kullanan, 0-100 derece aralığındaki celcius değerlerinin fahrenayt karşılıklarını ve 32-212 derece aralığındaki fahrenayt değerlerinin celcius karşılıklarını bulan bir programı düzgün bir tablo çıktı verecek şekilde yazınız.
*/

#include <iostream>
#include "celcius.h"
#include "fahrenheit.h"
#include "tablo.h"

int main(int argc, char const *argv[])
{

    float fahr, celc;
    size_t a;

    std::cout << "Bir Fahrenayt değeri giriniz. " << std::endl;
    std::cin >> fahr;
    celcius(fahr);

    std::cout << "Bir Celcius değeri giriniz. " << std::endl;
    std::cin >> celc;
    fahrenheit(celc);

    std::cout << "Bir tuşa basın. " << std::endl;
    std::cin >> a;

    std::cout << std::endl
              << std::endl;

    tablo();
    return 0;
}
