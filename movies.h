#ifndef MOVIES
#define MOVIES
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Movie : public Media{
public://Methods of every movie object
  Movie();//constructor that is run on creation of movie
  int getType();//each type of media has an arbitrary ID number assigned to it which is returned
  char* getDirector();//returns director of movie
  int getDuration();//returns the duration of movie in minutes
  float getRating();//returns the rating of the movie
private:
  char directorMovie[30];//stores the director of the movie
  int durationMovie;//stores the duration of the movie
  float ratingMovie;//stores the rating of the movie
};
#endif
