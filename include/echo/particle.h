#ifndef ECHO_PARTICLE_H
#define ECHO_PARTICLE_H

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

typedef struct Particle Particle;

struct Particle* allocParticle(const double x, const double xp, const double tau, const double dpp)
void freeParticle(struct Particle* p)
double getX(const struct Particle* p)
void setX(struct Particle* p, const double x)
double getXp(const struct Particle* p)
void setXp(struct Particle* p, const double xp)
double getTau(const struct Particle* p)
void setTau(struct Particle* p, const double tau)
double getDpp(const struct Particle* p)
void setX(struct Particle* p, const double dpp)
_Bool isLost(const struct Particle* p)
void loose(struct Particle* p)

#endif /* ECHO_PARTICLE_H */