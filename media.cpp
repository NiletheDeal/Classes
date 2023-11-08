#include<iostream>
#include<cstring>
#include "media.h"

using namespace std;
Media::Media() {//Prompts user for common data of all 3 media types. Runs first whenever a child(movie, videogame, or music) is created
  for(int i = 0; i<30; i++) {
    title[i] = '\0';
  }
  cout << "Please input the year your media was created" << endl;
  cin >> year;
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Please input the title of your media: ";
  cin >> title;
  cin.clear();
  cin.ignore(10000, '\n');
}
char* Media::getTitle() {//returns the title of the media
  return title;
}
int Media::getYear() {//returns the year of the meida
  return year;
}
int Media::getType() {//overwritten by all children of media
  return 0;
}
