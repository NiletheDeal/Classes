#include<iostream>
#include<cstring>
#include<vector>

#include "media.h"
#include "movies.h"
#include "music.h"
#include "videogames.h"

using namespace std;

void ADD();

void ADD(vector<Media*>* mediaList) {
  char mediaType[15];
  cout << "What kind of media would you like to add? Movie, Music, or Videogame: " << endl;
  cin.get(mediaType, 15);
  cin.clear();
  cin.ignore(10000, '\n');
  if(strcmp(mediaType, "movie") == 0 || strcmp(mediaType, "Movie") == 0) {
    Movie* mov = new Movie();
    mediaList->push_back(mov);
  }
  if(strcmp(mediaType, "videogame") == 0 || strcmp(mediaType, "Videogame") == 0) {
    Videogames* game = new Videogames();
    mediaList->push_back(game);
  }
  if(strcmp(mediaType, "music") == 0 || strcmp(mediaType, "Music") == 0) {
    Music* song = new Music();
    mediaList->push_back(song);
  }
}

int main() {
  vector<Media*>* mediaList = new vector<Media*>();
  while(true) {
    char actionType[15];
    cout << "What do you want to do? ADD, PRINT, DELETE, SEARCH, QUIT." << endl;
    cin.get(actionType, 15);
    cin.clear();
    cin.ignore(10000, '\n');
    if(strcmp(actionType, "ADD")) {
      ADD(mediaList);
    }
    if(strcmp(actionType, "PRINT")) {
      
  }
}
