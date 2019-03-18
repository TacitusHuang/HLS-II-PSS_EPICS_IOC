TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS BELOW HERE

# xxxRecord.h will be created from xxxRecord.dbd
DBDINC += xxxRecord

# Install xxxSupport.dbd into <top>/dbd
DBD += xxxSupport.dbd

# Build an IOC support library
LIBRARY_IOC += testSupport

# Compile and add the code to the support library
testSupport_SRCS += xxxRecord.c
testSupport_SRCS += devXxxSoft.c

# Link locally-provided code into the support library,
# rather than directly into the IOC application.
# This is required for Windows DLL builds.
testSupport_SRCS += dbSubExample.c
testSupport_SRCS += testHello.c
testSupport_SRCS += initTrace.c

testSupport_LIBS += $(EPICS_BASE_IOC_LIBS)


# Build the IOC application
PROD_IOC = test

# test.dbd will be created and installed
DBD += test.dbd

# test.dbd will include these files:
test_DBD += base.dbd
test_DBD += xxxSupport.dbd
test_DBD += dbSubExample.dbd
test_DBD += testHello.dbd
test_DBD += initTrace.dbd

# test_registerRecordDeviceDriver.cpp derives from test.dbd
test_SRCS += test_registerRecordDeviceDriver.cpp

# Build the main IOC entry point where needed
test_SRCS_DEFAULT += testMain.cpp
test_SRCS_vxWorks += -nil-

# Link in the code from our support library
test_LIBS += testSupport

ifneq ($(S7REDUNDANTPLC),)
    test_DBD += S7RedundantPLC.dbd
    test_LIBS += S7RedundantPLC
endif


# To build SNL programs, SNCSEQ must be defined
# in the <top>/configure/RELEASE file
ifneq ($(SNCSEQ),)
    # Build sncExample into testSupport
    sncExample_SNCFLAGS += +r
    sncExample2_SNCFLAGS += +r
    sncExample3_SNCFLAGS += +r
#    outputcontrol_SNCFLAGS += +r
    test_DBD += sncExample.dbd
    test_DBD += sncExample2.dbd
    test_DBD += sncExample3.dbd
#    test_DBD += outputcontrol.dbd
    # A .stt sequence program is *not* pre-processed:
    testSupport_SRCS += sncExample.stt
    testSupport_SRCS += sncExample2.stt
    testSupport_SRCS += sncExample3.stt
 #   testSupport_SRCS += outputcontrol.stt
    testSupport_LIBS += seq pv
    test_LIBS += seq pv

    # Build sncProgram as a standalone program
    PROD_HOST += sncProgram
    sncProgram_SNCFLAGS += +m
    # A .st sequence program *is* pre-processed:
    sncProgram_SRCS += sncProgram.st
    sncProgram_LIBS += seq pv
    sncProgram_LIBS += $(EPICS_BASE_HOST_LIBS)
endif

# Finally link IOC to the EPICS Base libraries
test_LIBS += $(EPICS_BASE_IOC_LIBS)

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD EXTRA GNUMAKE RULES BELOW HERE

