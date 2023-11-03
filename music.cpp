#include <iostream>
#include <cstring>
#include "media.h"
#include "music.h"

using namespace std;

Music :: Music() {
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
  cout << "Please input the publisher of the Song: " << end;
  cin >> publisherMusic;
  cin.clear();
  cin.ignore(10000, '\n');
}
char* Music :: getArtist() {
  return artistMusic;
}
int* Music :: getDuration() {
  return durationMusic;
}
char* Music :: getPublisher() {
  return publisherMusic;
}
int Music :: getType() {
  return 2;
}
