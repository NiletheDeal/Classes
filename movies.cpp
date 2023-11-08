#include <iostream>
#include <cstring>
#include "media.h"
#include "movies.h"

using namespace std;

Movie::Movie() {//Movie constructor that is run when a movie is created, but after the media constructor is run
  for(int i = 0; i<30; i++) {
    directorMovie[i] = '\0';
  }
  cout << "Please input the director of the Movie: " <<endl;
  cin >> directorMovie;
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Please input the duration of the Movie in minutes: " << endl;
  cin >> durationMovie;
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Please input the rating of the Movie out of 5 stars: " << endl;
  cin >> ratingMovie;
  cin.clear();
  cin.ignore(10000, '\n');
}

char* Movie::getDirector() {//returns director of movie
  return directorMovie;
}

int Movie::getDuration() {//returns duration of movie in minutes
  return durationMovie;
}
float Movie::getRating() {//returns rating of movie out of 5 stars
  return ratingMovie;
}
int Movie::getType() {//used when finding out the type of the media in print
  return 1;
}
