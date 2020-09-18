#include<iostream>
#include "box.h"


Box::Box(int a,int b,int c)
{
    m_length=a;
    m_height=b;
    m_breadth=c;
}
Box::length(Box &obj){
return obj.m_length;
}
Box::breadth(Box &obj){
return obj.m_breadth;
}
Box::height(Box &obj){
return obj.m_height;
}
void Box::display()
{
    std::cout<<m_length<<","<<m_breadth<<","<<m_height;
}

