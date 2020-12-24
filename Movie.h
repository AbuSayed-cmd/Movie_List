#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "Movie.h"
class Movie
{
private:
    std::string name;
    int rating;
    int view;
public:
    Movie(std::string name, int rating, int view);
    
    //copy constructor
    Movie(const Movie &copy);
    ~Movie();
    
    void setName(std::string name){
        this->name=name;
    }
    std::string getName() const{
        return name;
    }
    
    void setRating(int rating){
        this->rating=rating;
    }
    int getRating() const{
        return rating;
    }
    
    void setView(int view){
        this->view=view;
    }
    int getview() const{
        return view;
    }
    
    //Increment the watched attributes by 1
    
    void incrementView(){
        ++view;
    }
    
    //Display the movie information 
    void display () const;
};

#endif // MOVIE_H
