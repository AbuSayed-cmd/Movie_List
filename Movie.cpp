#include "Movie.h"
#include <iostream>


Movie::Movie(std::string name, int rating, int view)
           :name(name), rating(rating), view(view){
}

//copy Constructur
Movie::Movie(const Movie &source)
           :Movie {source.name,source.rating, source.view}{
               
           } 
Movie::~Movie()
{
}
//dispaly Method
void Movie::display () const{
    std::cout<<name<<" "<<rating<<" "<<view<<std::endl;
}

