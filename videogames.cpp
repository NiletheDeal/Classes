#include <iostream>
#include <cstring>
#include "media.h"
#include "videogames.h"

using namespace std;

Videogames::Videogames() {//Videogame constructor that is run when a videogame is created, but after the media constructor is run
  for(int i = 0; i < 30; i++) {
    publisherGame[i] = '\0';
  }
  cout << "Please input the publisher of the Game: " << endl;
  cin >> publisherGame;
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Please input the rating of the Game out of 5 stars: " << endl;
  cin >> ratingGame;
  cin.clear();
  cin.ignore(10000, '\n');
}
char* Videogames :: getPublisher() {//returns publisher of the game
  return publisherGame;
}
float Videogames:: getRating() {//returns rating of the game
  return ratingGame;
}
int Videogames :: getType() {//used when finding out the type of the media in print
  return 3;

}
