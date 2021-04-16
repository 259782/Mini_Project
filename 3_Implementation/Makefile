# Name of the project credits:Preet Pandit
PROJECT_NAME = STUDENT

TEST_PROJ_NAME = Test_$(PROJ_NAME)

# Output directory
BUILD = build

# All source code files
SRC = src/Add_Student.c\
src/Delete_Student.c\
src/Display_Student.c\
src/Modify_Student.c\
src/Search_Student.c\
src/utility.c\

# All test source files
TEST_SRC = ${SRC}\
test/SRS_Test.c\
unity/unity.c\


# All include folders with header files
INC	= -Iinc\
-Iunity\


#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   editor = notepad
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  editor = cat
   endif
endif
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)
#Library Includes
INCLUDE_LIBS = 

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(PROJECT_OUTPUT).$(EXEC))

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).$(EXEC)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) *.(EXEC)
	$(RM) Students.bin

# Create new build folder if not present
$(BUILD):
	mkdir build