#ifndef MACLAR_H
#define MACLAR_H

#include "variables.h"
#include <iostream>
#include "takim1.h"
#include "takim2.h"
#include "takim3.h"

void maclar()
{
    for (size_t j = 0; j < 2; j++) // 2'şer defa maç yapsınlar diye
    {
        x = 0;
        skor1 = 0;
        skor2 = 0;

        takim1();
        takim2();
        takim3();
    }
}

#endif // !MACLAR_H
