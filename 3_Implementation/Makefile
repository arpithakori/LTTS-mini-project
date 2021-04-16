# comments

#Target : dependency
#<TAB>Command

PROJ_NAME = a

SRC = main.c\
src\register.c\
src\displayfee.c\
src\calcbill.c\
src\displayStudent.c\
src\roombeddetails.c\
src\search.c

COV_SRC = main.c
INC = inc

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all:
	gcc -I $(INC) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))




