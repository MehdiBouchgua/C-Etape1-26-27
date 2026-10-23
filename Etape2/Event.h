#ifndef EVENT_H
#define EVENT_H

class Event
{
  private:
    int code;
    char* title;

  public:
    Event();                                   // défaut
    Event(const int c, const char* t);               // initialisation
    Event(const Event &e);                     // copie (deep copy !)
    ~Event();                                  // libère title

    void setCode(int c);
    void setTitle(const char* t);

    int getCode() const;
    const char* getTitle() const;

    void display() const;
};

#endif