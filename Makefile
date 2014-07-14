##
# Echo
# A C library for bunch longitudinal and transverse dynamics
#
# Author: Cedric Hernaslteens <cedric.hernalsteens@cern.ch>
# 
# European Organization for Nuclear Research
#
# Copyright (c) 2014+ CERN. All rights reserved.
#
##

#
# General variables
NAME=echo

#
# Compiler and archiver names
CC=gcc-4.8#cc
AR=ar

#
# Compiler options
OPTIONS=-O3 -std=c99 -fpic
WARNINGS=-Wall -pedantic
OPT=$(OPTIONS) $(WARNINGS)

#
# Compiler and archiver flags
ARFLAGS=rvs
CFLAGS=$(OPT) -I./include -I./include/fourrier

#
# Dependencies
LIB_DEPENDENCIES = src/bunch.o
										
#
# Rules
.PHONY: clean cleanall ps_injection
		
# # Library
$(NAME): lib/$(NAME).a lib/$(NAME).so
lib/$(NAME).a: $(LIB_DEPENDENCIES)
	$(AR) $(ARFLAGS) lib/$(NAME).a $(LIB_DEPENDENCIES)
lib/$(NAME).so: $(LIB_DEPENDENCIES)
	$(CC) -shared -o lib/$(NAME).so $(LIB_DEPENDENCIES) -lm -lfftw3

# # Clean
clean:
	$(RM) src/*.o lib/$(NAME).a $(LIB)*.so
	
cleanall:
	$(MAKE) -C examples/ex01 clean

# # Example01
ps_injection:
	$(MAKE) -C examples/ps_injection
