/*
Bir futbol ligine ait puan tablosu oluştumayı amaçlıyoruz.

Takımların isimleri string bir dizide tutulmalıdır, 4 takım yeterlidir.

Puan durumu ise int matris olarak tutulacaktır. Bu dizide galibiyet, mağlubiyet, beraberlik , averaj ve puan sütunları yer alacaktır.

Daha sonra bu 4 takım birbirleriyle ikişer maç yapacaktır.

Maçlar için elle skor girilmesi gerekecektir, örneğin ekrana FB-GS geldiğinde kullanıcı  2-2 yazarsa maç skoru olarak işlem görecektir.

Kazanan takım 3 puan, kaybeden takım 0 puan alır, eşitlik durumunda her iki takım da 1 puan alır.
Maçlar sonunda ekrana puan durumunu yazdırınız.

Örnek gösterim şöyledir.
       G    M    B    A    P
TK1    3    2    1    7    11
TK2    5    1    0    9    16
*/

#include <iostream>
#include <iomanip>
#include "variables.h"
#include "maclar.h"
#include "tablo.h"

int main(int argc, char const *argv[])
{

    maclar();
    tablo();

    return 0;
}
