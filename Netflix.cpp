#include <iostream>
#include <string>
#include <vector>
#include "Netflix.h"

Netflix::Netflix()
{
}

Netflix::~Netflix()
{
}

bool Netflix::addMovie (std:: string name, int rating, int view)
{
    for(const Movie &movie: movies){
        if(movie.getName()==name)
            return false;
            }
    Movie temp { name, rating, view};
    movies.push_back(temp);
    return true;
}

bool Netflix::incrementView(std::string name){
    for (Movie &movie:movies){
        if(movie.getName()==name){
            movie.incrementView();
            return true;
        }
    }  return false;
    }

void Netflix::display()const{
    if(movies.size()==0){
        std::cout<<"Sorry, no movie is Here\n"<<std::endl;
    } else{
        std::cout<<"'\n==============================="<<std::endl;
        for (const auto &movie: movies)
            movie.display();
            std::cout<<"\n=============================="<<std::endl;
    }
}

