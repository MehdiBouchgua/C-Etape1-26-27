#include "Event.h"
#include <string.h>
#include <iostream>

using namespace std;


//Constructeur par defaut
Event::Event()
{
  cout << ">>> Event = constructeur par défaut" << endl;
  title = NULL;
  setTitle("TitreTest");
  setCode(0);
}

//Constructeur d'initialisation
Event::Event(int c,const char* t)
{
  cout << ">>> Event : constructeur d'initialisation <<<" << endl;
  title = NULL;
  setTitle(t);
  setCode(c);
}


//Constructeur de copie
Event::Event(const Event &e)
{
  cout << ">>> Event : constructeur de copie <<<<" << endl;
  title = NULL;
  setTitle(e.getTitle());
  setCode(e.getCode());
}


//Destructeur
Event::~Event()
{
  cout << ">>> Event : Destructeur <<<<" << endl;
  if (title) delete[] title; //Liberation de mémoire
}



//SETTERS

void Event::setTitle(const char* t)
{
  if(t == NULL) return;
  if(title == t) return;
  if(title) delete[] title;
  title = new char[strlen(t)+1];
  strcpy(title, t);
}


void Event::setCode(const int c)
{
  code = c;
}



//GETTERS

int Event::getCode() const
{
  return code;
}

const char* Event::getTitle() const
{
  return title;
}


//AFFICHAGE
void Event::display() const
{
  cout << "Event :  ";
  if(title)
    cout << title;
  else
    cout << "Pas de titre";

  cout << " ( Event code : " << code << " )" << endl;

}