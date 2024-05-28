#include "Fill_brain.hpp"


Brain::Brain()
{
    std::cout << "there is a brain now!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "brain removed!" << std::endl;
}

Brain::Brain( const Brain& src )
{
    *this = src;
}

Brain& Brain::operator=( const Brain& src )
{
    std::cout << "<Brain.cpp:32> Brain copy called. (copy 100 times)" << std::endl;
    if ( this != &src )
    {
        for ( int i = 0; i < 100; i++ )
        {
            this->ideas[i] = src.ideas[i];
        }
    }
    return *this;
}