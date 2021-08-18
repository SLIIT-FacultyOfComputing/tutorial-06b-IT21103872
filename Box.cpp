#include "Box.h"

// Implement setters and getters
void BOX::setLength(int l)
{
  length =l;
}

void BOX::setWidth(int w)
{
  width= w;
}

void BOX::setHeight(int h)
{
  height= h;
}

int BOX::getLength()
{
  return length;
}

int BOX::getWidth()
{
  return width;
}

int BOX::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume()
{
  return length*width*height;
}
