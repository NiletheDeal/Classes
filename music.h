#ifndef MUSIC
#define MUSIC
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Music : public Media {
public:
  Music();
  virtual int getType();
  char* getArtist();
  int* getDuration();
  char* getPublisher();
private:
  char artistMusic[30];
  char publisherMusic[30];
  int durationMusic; //Int for duration in seconds


#endif
