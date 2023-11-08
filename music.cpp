#include <iostream>
#include <cstring>
#include "media.h"
#include "music.h"

using namespace std;

Music :: Music() {//Run on creation of a music object, but after media constructor
  for (int i = 0; i < 30; i++) {
    artistMusic[i] = '\0';
    publisherMusic[i] = '\0';
  }
  cout << "Please input the Artist of the Song: " << endl;
  cin >> artistMusic;
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Please input the duration of the Song in seconds: " << endl;
  cin >> durationMusic;
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Please input the publisher of the Song: " << endl;
  cin >> publisherMusic;
  cin.clear();
  cin.ignore(10000, '\n');
}
char* Music :: getArtist() {//returns artist of song
  return artistMusic;
}
int Music :: getDuration() {//returns duration of song in seconds
  return durationMusic;
}
char* Music :: getPublisher() {//returns the publisher of the song
  return publisherMusic;
}
int Music :: getType() {//returns the ID number of all music(2)
  return 2;
}
