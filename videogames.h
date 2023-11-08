#ifndef VIDEOGAMES
#define VIDEOGAMES
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Videogames : public Media {
public://Methods of every videogame object
  Videogames();//constructor that is run on creation of videogame
  int getType();//each type of media has an arbitrary ID number assigned to it which is returned on call
  char* getPublisher();//returns the publisher of the game
  float getRating();//returns the rating
private:
  char publisherGame[30];//stores the name of publisher of the game
  float ratingGame;//stores the rating of the game
};
#endif
