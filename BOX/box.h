#include<string>
#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED


class Box
{
    int m_length;
    int m_height;
    int m_breadth;

public:

    Box(int,int,int);

    void display();
    int height(Box &);
    int breadth(Box &);
    int length(Box &);
    int volume(Box &);
};

#endif
