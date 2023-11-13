#include <iostream>
#include "Movies.h"

Movies::Movies()
{

}

Movies::~Movies()
{

}
bool Movies::add_movie(std::string name,std::string rating,int watched)
{
    //Should be const for protection
    for(int i{};i<movies.size();i++){
        if(name == ((movies.at(i)).get_name())){
            return false;
        }
    }
    movies.push_back(Movie{name,rating,watched});
    return true;
}
bool Movies::increment_watched(std::string name)
{
    //Shouldn't be const
    for(int i{};i<movies.size();i++){
        if(name == ((movies.at(i)).get_name())){
            ((movies.at(i)).increment_watched());
            return true;
        }
    }
    return false;
}
void Movies::display()
{
    if(movies.size() == 0){
        std::cout << "Sorry, no movies to display\n" << std::endl;
    }else{
        std::cout << "========================START=========================="<< std::endl;
        for(const Movie &mov:movies){
            mov.display();
        }
        std::cout << "=========================END==========================="<< std::endl;

    }
}