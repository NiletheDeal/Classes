#include<iostream>
#include<cstring>
#include "media.h"

using namespace std;
Media::Media() {
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
char* Media::getTitle() {
  return title;
}
int Media::getYear() {
  return year;
}
int Media::getType() {
  return 0;
}
