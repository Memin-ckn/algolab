#ifndef TAKIM1_H
#define TAKIM1_H

void takim1()
{
    for (size_t i = 0; i < 3; i++) // 1. takım vs diğer üçü
    {
        std::cout << takimlar[x] << " vs " << takimlar[i + 1] << " sonucunu girin: " << std::endl;
        std::cin >> skor1 >> skor2;

        if (skor1 > skor2)
        {
            puan[x][0]++;
            puan[i + 1][1]++;
            puan[i + 1][3] += skor2 - skor1;
            puan[x][3] += skor1 - skor2;
            puan[x][4] += 3;
        }
        else if (skor1 == skor2)
        {
            puan[x][2]++;
            puan[i + 1][2]++;
            puan[x][4] += 1;
            puan[i + 1][4] += 1;
        }
        else if (skor1 < skor2)
        {
            puan[i + 1][0]++;
            puan[i + 1][3] += skor2 - skor1;
            puan[i + 1][4] += 3;
            puan[x][1]++;
            puan[x][3] += skor1 - skor2;
        }
    }
    x++;
}

#endif // !TAKIM1_H
