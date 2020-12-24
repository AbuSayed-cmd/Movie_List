#ifndef NETFLIX_H
#define NETFLIX_H
#include <vector>
#include <string>
#include "Netflix.h"
#include "Movie.h"
class Netflix
{
private:
        std::vector<Movie>movies;
public:
    Netflix();
    ~Netflix();

bool addMovie (std:: string name, int rating, int view);
bool incrementView(std::string name);
void display() const;
};

#endif // NETFLIX_H
