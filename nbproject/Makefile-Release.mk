#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Release
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/CanvasRenderer.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/src/Circle.o \
	${OBJECTDIR}/src/Canvas.o \
	${OBJECTDIR}/src/Shape.o

# Test Directory
TESTDIR=build/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-Release.mk dist/Release/GNU-Linux-x86/minicad

dist/Release/GNU-Linux-x86/minicad: ${OBJECTFILES}
	${MKDIR} -p dist/Release/GNU-Linux-x86
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/minicad ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/src/CanvasRenderer.o: src/CanvasRenderer.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/CanvasRenderer.o src/CanvasRenderer.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/src/Circle.o: src/Circle.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Circle.o src/Circle.cpp

${OBJECTDIR}/src/Canvas.o: src/Canvas.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Canvas.o src/Canvas.cpp

${OBJECTDIR}/src/Shape.o: src/Shape.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Shape.o src/Shape.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/canvas_test.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} 


${TESTDIR}/tests/canvas_test.o: tests/canvas_test.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O3 -Wall -I. -I. -Iinclude -Isrc -MMD -MP -MF $@.d -o ${TESTDIR}/tests/canvas_test.o tests/canvas_test.cpp

${OBJECTDIR}/src/CanvasRenderer_nomain.o: ${OBJECTDIR}/src/CanvasRenderer.o src/CanvasRenderer.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/CanvasRenderer.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/CanvasRenderer_nomain.o src/CanvasRenderer.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/CanvasRenderer.o ${OBJECTDIR}/src/CanvasRenderer_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

${OBJECTDIR}/src/Circle_nomain.o: ${OBJECTDIR}/src/Circle.o src/Circle.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/Circle.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Circle_nomain.o src/Circle.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/Circle.o ${OBJECTDIR}/src/Circle_nomain.o;\
	fi

${OBJECTDIR}/src/Canvas_nomain.o: ${OBJECTDIR}/src/Canvas.o src/Canvas.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/Canvas.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Canvas_nomain.o src/Canvas.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/Canvas.o ${OBJECTDIR}/src/Canvas_nomain.o;\
	fi

${OBJECTDIR}/src/Shape_nomain.o: ${OBJECTDIR}/src/Shape.o src/Shape.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/Shape.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O3 -Wall -Iinclude -Isrc -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/Shape_nomain.o src/Shape.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/Shape.o ${OBJECTDIR}/src/Shape_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/Release
	${RM} dist/Release/GNU-Linux-x86/minicad

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
