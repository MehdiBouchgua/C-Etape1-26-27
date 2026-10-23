#ifndef TIMING_H
#define TIMING_H

#include <string>
#include "Time.h"

namespace planning
{
  class Timing
  {
    private:
      std::string day;      
      Time start;           
      Time duration;        

    public:

      Timing();
      Timing(const std::string& d, const Time& s, const Time& dur);
      Timing(const Timing& t);
      ~Timing();

      void setDay(const std::string& d);
      void setStart(const Time& s);
      void setDuration(const Time& dur);

      std::string getDay() const;
      const Time& getStart() const;
      const Time& getDuration() const;

      void display() const;
  };
}

#endif