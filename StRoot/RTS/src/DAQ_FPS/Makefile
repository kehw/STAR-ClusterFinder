################ boilerplate #######################
-include ../rtsmakefile.def
-include ../rtsplus.def

# now fix and/or stuff to what out rtsmakefile.def did...

# make sure to kill all our -lyada which rtsmakefile did...
LDLIBS = 

HOSTFLAGS +=  -fomit-frame-pointer -funroll-loops
DEFINES += -DRTS_LOG_COLORED



OBJS := daq_fps.o

LIBS = libfps.a
BINS = 

all: $(LIBS) $(BINS)

libs: $(LIBS)

libfps.a : $(OBJS)
	@$(RTS_AR)
# DO NOT DELETE

daq_fps.o: ../../../../StRoot/RTS/include/rtsLog.h
daq_fps.o: ../../../../StRoot/RTS/include/rtsSystems.h
daq_fps.o: ../SFS/sfs_index.h
daq_fps.o: ../SFS/fs_index.h
daq_fps.o: ../SFS/sfs_base.h
daq_fps.o: ../DAQ_READER/daqReader.h
daq_fps.o: ../DAQ_READER/daqConfig.h
daq_fps.o: ../DAQ_READER/daq_dta.h
daq_fps.o: ../../../../StRoot/RTS/include/rts.h
daq_fps.o: ../DAQ_READER/daq_dta_structs.h
daq_fps.o: daq_fps.h
daq_fps.o: ../DAQ_READER/daq_det.h
daq_fps.o: ../DAQ_READER/daq_det.h
