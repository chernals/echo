/**
* Echo
* A C library for bunch longitudinal and transverse dynamics
*
* Author: Cedric Hernaslteens <cedric.hernalsteens@cern.ch>
* 
* European Organization for Nuclear Research
*
* Copyright (c) 2014+ CERN. All rights reserved.
*
**/

#include <stdlib.h>
#include <stdbool.h>
#include <particle.h>

struct Bunch{
  struct Particle** p;
  unsigned int nn;
};

struct b*
allocateBunch(unsigned int nn)
{
  struct bunch* b = (struct bunch*) malloc(sizeof(struct Bunch));
  b->p = (struct Particle**) malloc(nn*sizeof(struct Particle));
  return b;
}

void
populateBunch(struct Bunch b*, unsigned int nn)
{
  struct Bunch b* = allocateBunch(nn);
}

double
getCentroid(struct Bunch b*)
{
  double centroid=0.0;
  unsigned int i=0;
  while(i<nn)
  {
    centroid += getX(p[i]);
  }
}

void
print(struct Bunch b*)
{
  FILE* fp = fopen("bpm", 'w');
  if(fp=NULL)
    return;
  unsigned int i=0;
  while(i<nn)
  {
    fprintf(fp, "%e\n", getX(p[i]));
  }
}