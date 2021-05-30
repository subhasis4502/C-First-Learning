#include "Movie.h"
#include <iostream>

using namespace std;

Movie(string name_val, int rating_val, int watched_val)
    :name{name_val}, rating{rating_val}, watched{watched_val}{

    }

Movie::Movie(const Movie &source)
    :name(source.name), rating(source.rating), watched(source.watched){

    }

void display_movie(Movie m){
    cout << "Movie name: " << m.name << endl;
    cout << "Rating: " << m.rating << endl;
    cout << "Watched for: " << m.watched << " times" << endl;
}