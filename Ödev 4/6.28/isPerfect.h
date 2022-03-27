void isPerfect()
{

    int toplam;

    for (int sayi = 1; sayi <= 1000; sayi++)
    {

        toplam = 0;

        for (int i = 1; i <= sayi / 2; i++)
        {
            if (sayi % i == 0)
            {
                toplam += i;
            }
        }

        if (toplam == sayi)
        {
            std::cout << sayi << " bir mükemmel sayıdır." << std::endl;
        }
    }
}