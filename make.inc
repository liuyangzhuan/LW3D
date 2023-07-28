############################################################################
#
#  Program:         ButterflyPACK
#
#  Module:          make.inc
#
#  Purpose:         Top-level Definitions
#
#  Creation date:   August 19, 2018	version 1.1.0
#
#  Modified:   January 9, 2019 version 1.1.0
#
#
############################################################################
#
#  The name of the libraries to be created/linked to
#
DButterflyPACKLIB   	= /SRC_DOUBLE/libdbutterflypack.a
ZButterflyPACKLIB   	= /SRC_DOUBLECOMPLEX/libzbutterflypack.a
INCDEF  = -I/SRC_DOUBLE -I/SRC_DOUBLECOMPLEX -I/SRC_DOUBLE -I/SRC_DOUBLECOMPLEX


LIBS		= $(DButterflyPACKLIB) $(ZButterflyPACKLIB)    

#
#  The archiver and the flag(s) to use when building archive (library)
#  If your system has no ranlib, set RANLIB = echo.
#
ARCH         = /usr/bin/ar
ARCHFLAGS    = cr
RANLIB       = /usr/bin/ranlib

CC           = 
CFLAGS 	     =  
#CFLAGS      += -D
# CFLAGS     += 
CXX          = 
CXXFLAGS     =  
#XSDK_INDEX_SIZE=
NOOPTS       = -O0
FORTRAN	     = /opt/cray/pe/craype/2.7.20/bin/ftn
FFLAGS     = -O3 -DNDEBUG -O3 -DHAVE_FINAL  -DHAVE_OPENMP -fopenmp -DHAVE_TASKLOOP -fallow-argument-mismatch -cpp -fno-range-check -ffree-line-length-none -ffixed-line-length-none -fimplicit-none -lpthread 

FLOADER       = /opt/cray/pe/craype/2.7.20/bin/ftn
CXXLOADER       = 
CXXLOADOPTS     =   
FLOADOPTS     =   -fopenmp
FIMPLICIT_LINKLIB = -lgcc -lgcc_s -lc -lgcc -lgcc_s -lm -lquadmath -lgcc -lgcc_s -lm -lgfortran -lpthread -lquadmath -lgfortran -lxpmem -ldsmml -lmpi_gtl_cuda -lmpi_gnu_91 -lmpifort_gnu_91 -ldl -lsci_gnu_82 -lsci_gnu_82_mpi -lcuda -lcudart -lcupti 
PREPROC = 
