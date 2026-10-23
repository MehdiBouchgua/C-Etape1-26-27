#include "Event.h"
#include <string.h>
#include <iostream>

using namespace std;

namespace planning{

    //Constructeur par defaut
  Event::Event()
  {
    cout << ">>> Event = constructeur par défaut" << endl;
    title = nullptr;
    timing = nullptr;
    setTitle("TitreTest");
    setCode(0);
  }

  //Constructeur d'initialisation
  Event::Event(int c,const char* t)
  {
    cout << ">>> Event : constructeur d'initialisation <<<" << endl;
    title = nullptr;
    timing = nullptr;
    setTitle(t);
    setCode(c);
  }


  //Constructeur de copie
  Event::Event(const Event &e)
  {
    cout << ">>> Event : constructeur de copie <<<<" << endl;
    title = nullptr;
    timing = nullptr;
    setTitle(e.getTitle());
    setCode(e.getCode());
    if (e.timing != nullptr) setTiming(*e.timing);
  }


  //Destructeur
  Event::~Event()
  {
    cout << ">>> Event : Destructeur <<<<" << endl;
    if (title) delete[] title; //Liberation de mémoire
    if (timing) delete timing;
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

  void Event::setTiming(const Timing& t)
  {
    if(timing == &t) return;
    delete timing;
    timing = new Timing(t);
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

  const Timing& Event::getTiming() const
  {
    return *timing;
  }


  //AFFICHAGE
  void Event::display() const
  {
    cout << "[code=" << code << "] ";
    if (title) cout << title;
    else cout << "Pas de titre";

    if (timing != nullptr)
    {
      cout << " (Timing : ";
      timing->display();
      cout << ")";
    }
  }

}

