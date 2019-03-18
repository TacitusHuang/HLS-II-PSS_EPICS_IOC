#!../../bin/darwin-x86/test

## You may have to change plc to something else
## everywhere it appears in this file

< envPaths

cd ${TOP}

# Load drivers and dbd files ==============

## Register all support components

dbLoadDatabase "dbd/test.dbd"
test_registerRecordDeviceDriver pdbbase

#var S7RedundantPLCDebug <level>
#level=-1:  no output
#level=0:   errors only
#level=1:   startup messages
#level=2: + output record processing
#level=3: + inputput record processing
#level=4: + driver calls
#level=5: + io printout
#be careful using level>1 since many messages may introduce delays

#var S7RedundantPLCDebug 1

# Configure the hardware
#S7RedundantPLCConfigure "PLCname","IPaddr",IPport,inSize,outSize,
#          bigEndian,recvTimeout,sendInterval,redundancy
#connects to PLC <name> on address <IPaddr> port <IPport>
#<inSize>        : size of data bock PLC -> IOC [bytes]
#<outSize>       : size of data bock IOC -> PLC [bytes]
#<bigEndian>=1   : motorola format data (MSB first)
#<bigEndian>=0   : intel format data (LSB first)
#<recvTimeout>   : time to wait for input before disconnecting [ms]
#<sendInterval>  : time to wait before sending new data to PLC [ms]
#<redundancy>=1  : redundant mode, IPaddr and IPaddr+1 are used
#<redundancy>=0  : normal mode
# IP port 5064 5065 used by epics


S7RedundantPLCConfigure "PLC-1","192.168.17.9",2000,218,4,0,2000,400,1

## Load record instances
dbLoadTemplate "testApp/Db/PSS.substitutions"
dbLoadRecords "testApp/Db/PSS.db","plcname=PLC-1"

#dbLoadRecords "db/PSS.db","plcname=PLC-1"


## Set this to see messages from mySub

## Run this to trace the stages of iocInit
#traceIocInit

cd "${TOP}/iocBoot/${IOC}"
iocInit
var S7RedundantPLCDebug 1


## Start any sequence programs

seq sncExample3, "user=huangziyHost"
