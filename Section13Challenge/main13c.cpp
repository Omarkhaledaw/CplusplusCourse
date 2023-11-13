#include <iostream>
#include "Movies.h"

using namespace std;

void add_movie(Movies &movie,string name,string rating,int watched);
void increment_watched(Movies &movie,string name);

int main() {

    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "The Dark Knight", "PG-13",7);                 // OK
    add_movie(my_movies,"Harry Poter and The Half Blood Prince", "PG",5);             // OK
    add_movie(my_movies,"Ford vs Ferarri", "PG-13",2);           // OK
     
    my_movies.display();   
    
    add_movie(my_movies,"Ford vs Ferarri", "PG-13",7);            // Already exists
    add_movie(my_movies,"Fight Club", "R",12);              // OK
 
    my_movies.display();    
    
    increment_watched(my_movies,"The Dark Knight");                    // OK
    increment_watched(my_movies,"Harry Poter and The Half Blood Prince");              // OK
    
    my_movies.display();    
    
    increment_watched(my_movies,"XXX");         // XXX not found
    return 0;
}

void add_movie(Movies &movie,string name,string rating,int watched){
    if(movie.add_movie(name,rating,watched)){
        cout << name << " added" << endl;
    }else{
        cout << name << " already exists" << endl;
    }
}
void increment_watched(Movies &movie,string name){
    if (movie.increment_watched(name)) {
        cout << name << " watch incremented" << endl;
    } else {
        cout << name << " not found" << endl;
    }
}