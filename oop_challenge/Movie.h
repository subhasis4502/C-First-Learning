#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <iostream>
#include <string>

using namespace std;

class Movie
{
private:
    string name;    //Movie name    
    int rating;     //Movie rating(1-5)
    int watched;    //Number of time movie watched
public:
    string get_name(){return name;}
    int get_rating(){return rating;}
    int get_watched(){return watched;}
    //Constructor
    Movie(string name_val, int rating_val, int watched_val);
    //Copy constructor
    Movie(const Movie &source);
    //Destructor
    ~Movie();
};

Movie::Movie(string name_val, int rating_val, int watched_val)
    :name{name_val}, rating{rating_val}, watched{watched_val}{
        cout << "Constructor called for " << name << endl;
    }

Movie::Movie(const Movie &source)
    :name(source.name), rating(source.rating), watched(source.watched){
        cout << "A copy is made for " << source.name << endl;
    }

Movie::~Movie(){
    cout << "Destructor called for " << name << endl;
}

void display_movie(Movie m){
    cout << "Movie name: " << m.get_name() << endl;
    cout << "Rating: " << m.get_rating() << endl;
    cout << "Watched for: " << m.get_watched() << " times" << endl;
}

#endif //_MOVIE_H_