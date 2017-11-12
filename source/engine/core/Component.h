#ifndef _U_COMPONENT_H
#define _U_COMPONENT_H

class Component{
public:
  Component() {};
  virtual ~Component() {};

  virtual void update() = 0;
};

#endif //_U_COMPONENT_H
