#!/bin/sh
MAKEFLAGS += -rR --include-dir=$(CURDIR)
objects=main1.o foo.o main2.o bar.o
mains=main1.o main2.o
MAKEFLAGS += -rR --include-dir=$(CURDIR)
filtered-out = $(filter-out $(mains),$(objects)) 
makeflags=$(filter-out --%,$(MAKEFLAGS))

all : makeoption

test:
	@echo $(objects)	
	@echo $(filtered-out)
	@echo $(makeflags) 

makeoption:
	@echo $(MAKEFLAGS)
	@echo $(objects:.o=.c)
