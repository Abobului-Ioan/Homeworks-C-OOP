#include "distanta.h"

distanta::distanta()
{

    dist = 0;
}


void distanta::scrie()
{

  cout << "Introduce-ti distanta(metri): " ;
  cin >> dist;

}

void distanta::arata()
{

  cout << dist << " metri " ;

}

distanta distanta::aduna(distanta d2)
{

  distanta temp;
  temp.dist = dist + d2.dist;
  return temp;

}

distanta distanta::scade(distanta d2)
{
  distanta temp;
  temp.dist = dist - d2.dist;
  return temp;

}


