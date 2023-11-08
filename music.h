#ifndef MUSIC
#define MUSIC
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Music : public Media {
public://methods of every music object
  Music();//constructor that is run on creation of music
  int getType();//returns the ID number of music(2)
  char* getArtist();//returns the artist name
  int getDuration();//returns the duration of song in seconds
  char* getPublisher();//returns the publisher of the song
private://data value of each song
  char artistMusic[30];//stores artist name
  char publisherMusic[30];//stores publisher name
  int durationMusic; //Int for duration in seconds
};

#endif
