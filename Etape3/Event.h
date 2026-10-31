#ifndef EVENT_H
#define EVENT_H
#include "Timing.h"

namespace planning{
  class Event
  {
    private:
      int code;
      char* title;
      Timing* timing;

    public:
      Event();                                   // défaut
      Event(const int c, const char* t);               // initialisation
      Event(const Event &e);                     // copie (deep copy !)
      ~Event();                                  // libère title

      static int currentCode;

      void setCode(int c);
      void setTitle(const char* t);
      void setTiming(const Timing& t);

      int getCode() const;
      const char* getTitle() const;
      const Timing& getTiming() const;

      void display() const;
  };  
}


#endif