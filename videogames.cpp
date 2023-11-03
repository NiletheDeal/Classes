#include <iostream>
#include <cstring>
#include "media.h"
#include "videogames.h"

using namespace std;

Videogames:Videogames() {
  for(int i = 0; i < 30; i++) {
    publisherGame[i] = '\0';
  }
  cout << "Please input the publisher of the Game: " << endl;
  cin >> publisherGame;
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Please input the rating of the Game: " << endl;
  cin >> ratingGame;
  cin.clear();
  cin.ignore(10000, '\n');
}
char* Videogames :: getPublisher() {
  return publisherGame;
}
float* Videogames:: getRating() {
  return ratingGame;
}
int Videogames :: getType() {
  return 3;

}
