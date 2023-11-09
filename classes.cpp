//Neel Madala
//11/8/2023
/*
This program allows the user to input movie, music or videogame, information(title, year, director, publisher, duration, rating) and add them to a medialist
which one can search and delete through by year or title.
 */
#include<iostream>
#include<cstring>
#include<vector>

#include "media.h"
#include "movies.h"
#include "music.h"
#include "videogames.h"

using namespace std;

//Prototype Functions
void ADD(vector<Media*>* mediaList);
void PRINT(Media* media);
void SEARCH(int Year, vector<Media*>* media);
void SEARCH(char* Title, vector<Media*>* media);
void DELETE(int Year, vector <Media*>* media);
void DELETE(char* Title, vector <Media*>* media)

  
void ADD(vector<Media*>* mediaList) {//Add to the media
  char mediaType[15];
  cout << "What kind of media would you like to add? Movie, Music, or Videogame: " << endl;
  cin.get(mediaType, 15);
  cin.clear();
  cin.ignore(10000, '\n');
  if(strcmp(mediaType, "movie") == 0 || strcmp(mediaType, "Movie") == 0) {//Add a movie
    Movie* mov = new Movie();//creates a movie and in movie.cpp gets rest of the info
    mediaList->push_back(mov);
  }
  if(strcmp(mediaType, "videogame") == 0 || strcmp(mediaType, "Videogame") == 0) {//Add a videogame
    Videogames* game = new Videogames();//creates a movie and in videogames.cpp asks for info on the game
    mediaList->push_back(game);
  }
  if(strcmp(mediaType, "music") == 0 || strcmp(mediaType, "Music") == 0) {//Add a Song
    Music* song = new Music();//creates a song and in music.cpp prompts the user for the info
    mediaList->push_back(song);
  }
}

void PRINT(Media* media) {
  cout << media->getTitle() << ",";
  cout << media->getYear() << endl;
  if(media->getType() == 1) { //Is the media type a movie
    cout << " Directed by " << static_cast<Movie*>(media)->getDirector() << endl;
    cout << " Duration of " << static_cast<Movie*>(media)->getDuration() << " minutes" << endl;
    cout << " Rating of " << static_cast<Movie*>(media)->getRating() << " stars out of 5" << endl << endl;
  }
  if(media->getType() == 2) { //Is the media type a song
    cout << " Sung by " << static_cast<Music*>(media)->getArtist() << endl;
    cout << " Published by " << static_cast<Music*>(media)->getPublisher() << endl;
    cout << " Duration of " << static_cast<Music*>(media)->getDuration() << " seconds" << endl << endl;  
  }
  if(media->getType() == 3) { //Is the media type a videogame
    cout << " Published by " << static_cast<Videogames*>(media)->getPublisher() << endl;
    cout << " Raing at " << static_cast<Videogames*>(media)->getRating() << " stars out of 5" << endl << endl;
  }
}

void SEARCH(int Year, vector<Media*>* media) {//Search by Year
  vector<Media*>::iterator iterSerYr;
  for(iterSerYr = media->begin(); iterSerYr != media ->end(); iterSerYr++) {//Goes through each media in medialist
    if((*iterSerYr)->getYear() == Year) {//Matches the year given by user?
      PRINT(*iterSerYr);
    }
  }
}

void SEARCH(char* Title, vector<Media*>* media) {//Search by title
  vector<Media*>::iterator iterSerTtl;
  for(iterSerTtl = media->begin(); iterSerTtl != media ->end(); iterSerTtl++) {//goes through each media in medialist
    if(strcmp((*iterSerTtl)->getTitle(), Title) == 0) {//Matches the title given by user?
      PRINT(*iterSerTtl);
    }
  }
}

void DELETE(int Year, vector <Media*>* media) {//Delete by year
  vector<Media*>::iterator iterDelYr;//goes through each slot in the medialist
  char input[15];
  for(iterDelYr = media->begin(); iterDelYr != media ->end(); iterDelYr++) {//for loop to go through each
    if((*iterDelYr)->getYear() == Year) {//is this the media with the same year as the user wants
      PRINT(*iterDelYr);//Prints out matching media
      cout << "Do you wish to delete this Media?(y/n)" << endl;
      cin.get(input, 15);
      cin.clear();
      cin.ignore(10000, '\n');
      if(strcmp(input, "y") == 0 || strcmp(input, "yes") == 0 || strcmp(input, "Yes") == 0) {//double checking you want to delete this specific Media
	cout << "Deleting this Media" << endl << endl;
	media->erase(iterDelYr);
	delete* iterDelYr;
	return;
      } 
      else {//Not the media user wants to delete
	cout << "Skipping this Media" << endl << endl;
      }
    }
  }
}

void DELETE(char* Title, vector <Media*>* media) {//Delete by title
  vector<Media*>::iterator iterDelTtl;//goes through each slot in the medialist
  char input[15];
  for(iterDelTtl = media->begin(); iterDelTtl != media ->end(); iterDelTtl++) {//for loop to go through each
    if((*iterDelTtl)->getTitle() == Title) {//is this the media with the same year as the user wants
      PRINT(*iterDelTtl);//Prints out matching media
      cout << "Do you wish to delete this Media?(y/n)" << endl;
      cin.get(input, 15);
      cin.clear();
      cin.ignore(10000, '\n');
      if(strcmp(input, "y") == 0 || strcmp(input, "yes") == 0 || strcmp(input, "Yes") == 0) {//double checking you want to delete this specific Media
	cout << "Deleting this Media" << endl;
	media->erase(iterDelTtl);
	delete* iterDelTtl;
	return;
      } 
      else {//Not the media user wants to delete
	cout << "Skipping this Media" << endl;
      }
    }
  }
}

int main() {
  char title[30];
  int year;
  vector<Media*>* mediaList = new vector<Media*>();
  cout << "Welcome to Classes." << endl;
  while(true) {//Keeps program running
    char actionType[15];
    for(int i = 0; i >15; i++) {
      actionType[i] = '\0';
    }
    cout << "What do you want to do? ADD, SEARCH, DELETE, QUIT." << endl;
    cin >> actionType;
    cin.clear();
    cin.ignore(10000, '\n');
    if(strcmp(actionType, "ADD") == 0) {//Add to the mediaList
      ADD(mediaList);
    }
    else if(strcmp(actionType, "SEARCH") == 0) {//Search for the media
      cout << "Would you like to search by title or year?" << endl;
      cin.get(actionType, 6);
      cin.clear();
      cin.ignore(10000, '\n');
      if(strcmp(actionType, "Title") == 0 || strcmp(actionType, "title") == 0) {//Search by title
	cout<<"Input title: " << endl;
	cin.get(title, 30);
	cin.clear();
	cin.ignore(10000, '\n');
	SEARCH(title, mediaList);
      }
      else if(strcmp(actionType, "Year") == 0 || strcmp(actionType, "year") == 0) {//Search by year
	cout<< "Input Year: ";
	cin >>year;
	cin.clear();
	cin.ignore(10000, '\n');
	cout << endl;
	SEARCH(year, mediaList);
      }
    }
    else if(strcmp(actionType, "DELETE") == 0) {//Delete function
      cout << "Would you like to delete by title or year?" << endl;
      cin.get(actionType, 6);
      cin.clear();
      cin.ignore(10000, '\n');
      if(strcmp(actionType, "Title") == 0 || strcmp(actionType, "title") == 0) {//Delete by title
	cout<<"Input title: " << endl;
	cin.get(title, 30);
	cin.clear();
	cin.ignore(10000, '\n');
	DELETE(title, mediaList);
      }
      else if(strcmp(actionType, "Year") == 0 || strcmp(actionType, "year") == 0) {//Delete by year
	cout<< "Input Year: ";
	cin >>year;
	cin.clear();
	cin.ignore(10000, '\n');
	cout << endl;
	DELETE(year, mediaList);
      }
    }
    else if(strcmp(actionType, "QUIT") == 0) {//Quits program
      cout << "Thank you for using this program!" << endl;
      break;
    }
    else {//Invalid inputs
      cout << "Invalid Input. Try again" << endl;
    }
  }
}
