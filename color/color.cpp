#include<iostream>
#include "color.h"


Colour::invert(Colour & a)
    {
        a.m_b=255-a.m_b;
        a.m_g=255-a.m_g;
        a.m_r=255-a.m_r;

        return 0;
    }
