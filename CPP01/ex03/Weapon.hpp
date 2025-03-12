#ifndef WEAPON_HPP
#define WEAPON_HPP

<<<<<<< HEAD
#include <iostream>

class Weapon {
public:
  Weapon(std::string type);
  ~Weapon();
  void setType(std::string type);
  std::string const &getType() const;

private:
  std::string _type;
=======
#include <string>

class Weapon {
private:
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon();
    const std::string& getType() const;
    void setType(std::string type);
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
};

#endif