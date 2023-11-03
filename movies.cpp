#include <iostream>
#include <cstring>
#include "media.h"
#include "movie.h"

using namespace std;

Movie::Movie() {
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
  cout << "Please input the rating of the Movie: " << endl;
  cin.clear();
  cin.ignore(10000, '\n');
}

char* Movie::getDirector() {
  return directorMovie;
}

int* Movie::getDuration() {
  return &durationMovie;
}
float* Movie::getRating() {
  return &durationMovie;
}
int Movie::getType() {
  return 1;
}
