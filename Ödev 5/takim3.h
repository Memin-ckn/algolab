#ifndef TAKIM3_H
#define TAKIM3_H

void takim3()
{
    for (size_t i = 2; i < 3; i++) // 3. takım vs 4. takım
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

#endif // !TAKIM3_H
