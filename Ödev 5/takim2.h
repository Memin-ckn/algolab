#ifndef TAKIM2_H
#define TAKIM2_H

void takim2()
{
    for (size_t i = 1; i < 3; i++) // 2. takım vs diğer ikisi
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

#endif // !TAKIM2_H
