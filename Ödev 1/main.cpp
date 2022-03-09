/*
Kullanıcıdan 3 adet para miktarını lira ve kuruşu ayrı ayrı olarak alan, toplayarak sonuç üreten ve miktar 100TL’den fazla ise ekrana “vergi ödemelisiniz” değilse “vergi borcunuz yoktur” yazan programı kodlayınız.

Önce para1 Lira alınır, sonra para1 Kuruş alınır. Sonrasında para2 ve para3 aynı şekilde alınır ve toplama işlemi yapılır………

Kuruş miktarı 100’ü geçerse lira artmalıdır ve kuruş mod100 alınmalı. Örneğin  3.88 + 4.50 + 5.80 = 12.218TL=14.18 TL gibi…
(sayılar integer türünde olmalı, double kullanılmadan yapılmalıdır)
*/

#include <iostream>

int main()
{
	int toplamK = 0, toplamT = 0;
	int lira = 0, kurus = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Tam kısmı giriniz:";
		std::cin >> lira;
		std::cout << "Küsüratı giriniz:";
		std::cin >> kurus;
		toplamK += kurus;
		toplamT += lira;

		if (toplamK >= 100)
		{
			toplamT += toplamK / 100;
			toplamK %= 100;
		}
		std::cout << "Toplam miktar: " << toplamT << "." << toplamK << std::endl;
	}
	if (toplamT > 100)
	{
		std::cout << "Verginizi ödemelisiniz.";
	}
	else
	{
		std::cout << "Vergi ödemenize gerek yoktur.";
	}
	return 0;
}
