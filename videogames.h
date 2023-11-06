#ifndef VIDEOGAMES
#define VIDEOGAMES
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Videogames : public Media {
public:
  Videogames();
  int getType();
  char* getPublisher();
  float getRating();
private:
  char publisherGame[30];
  float ratingGame;
};
#endif
