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

struct Particle{
  double x;
  double xp;
  double tau;
  double dpp;
  _Bool lost;
};

struct Particle*
allocParticle(const double x, const double xp, const double tau, const double dpp)
{
  struct Particle* p = (struct Particle*) malloc(sizeof(struct Particle));
  p->x = x;
  p->xp = xp;
  p->tau = tau;
  p->dpp = dpp;
  return p;
}

void
freeParticle(struct Particle* p)
{
  /* TO DO */
}

double
getX(const struct Particle* p)
{
  return p->x;
}

void
setX(struct Particle* p, const double x)
{
  p->x = x;
}

double
getXp(const struct Particle* p)
{
  return p->xp;
}

void
setXp(struct Particle* p, const double xp)
{
  p->xp = xp;
}

double
getTau(const struct Particle* p)
{
  return p->tau;
}

void
setTau(struct Particle* p, const double tau)
{
  p->tau = tau;
}

double
getDpp(const struct Particle* p)
{
  return p->dpp;
}

void
setX(struct Particle* p, const double dpp)
{
  p->dpp = dpp;
}

_Bool
isLost(const struct Particle* p)
{
  return p->lost;
}

void
loose(struct Particle* p)
{
  p->lost=_True;
}