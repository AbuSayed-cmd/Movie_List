#include <iostream>
#include "Netflix.h"

using namespace std;
//Function Prototype
void incrementView(Netflix &movies, std::string name);
void addMovie(Netflix &movies, std::string name, int rating, int view);

void incrementView(Netflix &movies, std::string name){
    if(movies.incrementView(name)){
        std::cout<<name<<"Viewed Incremented"<<std::endl;
    }else{
        std::cout<<name<<"Not Found In the list"<<std::endl;
    }
}

void addMovie(Netflix &movies, std::string name, int rating, int view){
    if(movies.addMovie(name,rating,view)){
        std::cout<<name<<" added in the list"<<std::endl;
    }else{
        std::cout<<name<<" already in the list"<<std::endl;
    }
}
int main()
{
	Netflix myList;
    
   myList.display();
  
    addMovie(myList, "Ozak", 7, 5);
    addMovie(myList, "KingDom", 8, 2);
    addMovie(myList, "HarryPotter", 9, 4);
    
    myList.display();
    
    incrementView(myList, "Ozak");
    myList.display();
    
    
	return 0;
}
