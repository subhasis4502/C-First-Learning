#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <iostream>
#include <string>
#include "Movie.h"
#include <vector>

using namespace std;

class Movies
{
private:
    vector<Movie> movies;
public:
    Movies();
    ~Movies();
    bool add_movie(string name, int rating, int watched);
    void increment_watched(string name);
    void display_all();
};

Movies::Movies(){}
Movies::~Movies(){}

bool Movies::add_movie(string name, int rating, int watched){
    for (const Movie &movie: movies) {
        if (movie.get_name() == name)
            return false;
    }
    Movie temp(name, rating, watched);
    movies.push_back(temp);
    return true;
}

#endif //_MOVIEs_H_