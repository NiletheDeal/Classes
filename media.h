#ifndef MEDIA
#define MEDIA
#include<iostream>
#include<cstring>

using namespace std;
//Define all of the fields and constructs
class Media {
public:
  Media();//on object creation get title, year, type
  char* getTitle();//returns title of the media
  int getYear();//returns the year it was created
  virtual int getType();//overwritten by all children of media
protected:
  int year; //All media has a year published
  char title[30]; //All media has a title


};
#endif
