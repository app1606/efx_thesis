###############################################################
#
#  First, choose a C and C++ compilers, and set compiler flags.
#  This is done by setting the variables CXX, CC, CFLAGS, and
#  CXXFLAGS.
#
###############################################################


CC=gcc
# A C or C++ compiler, e. g., gcc, cc, xlc.
# There are a few components written in C which may be compiled
# under C++, but C compilers tend to generate slightly better code.
# The C++ and C compilers (if different) must generate
# compatible code.


CXX=g++
# A C++ compiler, e.g., g++, CC, xlC


CFLAGS=-g -O2
# Flags for the C compiler
# Some useful flags:
#   -O2   --  recommended level of optimization
#   -m64  --  needed to get 64-bit longs on some platforms
#   -g    --  debugging
#   -mcpu=v8  --  needed with gcc/g++ to get the full instruction set
#                 of a SparcStation
#   -qarch=ppc  -- needed with xlc/C to get the full instruction set
#                  of a PowerPC



CXXFLAGS=-O3
# Flags for the C++ compiler (usually the same as CFLAGS)
# Some useful flags:
#   -+  -- needed with xlC to make it treat .c files as C++ files

# Here are a few more variables for standard utilities.
# The defaults should almost always be OK.


AR=ar
# command to make a library

ARFLAGS=ruv
# arguments for AR

RANLIB=ranlib
# set to echo if you want to disable it completely

LDFLAGS=
# arguments for linker for C programs

LDFLAGS_CXX=$(LDFLAGS)
# libraries for linking C++ programs

LDLIBS=-lm
# libraries for linking C programs

LDLIBS_CXX=$(LDLIBS)
# libraries for linking C++ programs

CPPFLAGS=
# arguments for the C preprocessor

LIBTOOL=/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/libtool
# libtool command

DEF_PREFIX=/usr/local

PREFIX=/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest
LIBDIR=$(PREFIX)/lib
INCLUDEDIR=$(PREFIX)/include
DOCDIR=$(PREFIX)/share/doc
# where to install NTL

###############################################################
#
#  Second, if you want to use GMP (the GNU Multi-Precision library),
#  define the variables GMP_OPT_INCDIR, GMP_OPT_LIBDIR, GMP_OPT_LIB below.
#  You also will have to set either NTL_GMP_LIP or NTL_GMP_HACK
#  in the config.h file.
#
#  Using GMP can lead to significant performance gains on some
#  platforms.  You can obtain GMP from http://www.swox.com/gmp.
#  Once you unpack it into a directory, just execute
#     ./configure; make
#  in that directory.
#
###############################################################


GMP_PREFIX=/Users/nikita/Desktop/Diploma_Project/latte-integrale-1.7.4/dest

GMP_INCDIR=$(GMP_PREFIX)/include
# directory containing gmp.h if using GMP 

GMP_LIBDIR=$(GMP_PREFIX)/lib
# directory containing libgmp.a if using GMP 

GMP_OPT_INCDIR=-I$(GMP_INCDIR) # GMPI
GMP_OPT_LIBDIR=-L$(GMP_LIBDIR) # GMPL
GMP_OPT_LIB=-lgmp # GMP
# uncomment these if using GMP


###############################################################
#
#  Third, if you want to use gf2x (a library for fast
#  multiplication over GF(2)[X]), you need to
#  define the variables GF2X_OPT_INCDIR, GF2X_OPT_LIBDIR, GF2X_OPT_LIB below.
#  You also will have to set NTL_GF2X_LIB 
#  in the config.h file.
#
###############################################################

GF2X_PREFIX=$(DEF_PREFIX)

GF2X_INCDIR=$(GF2X_PREFIX)/include
# directory containing gf2x.h if using gf2x

GF2X_LIBDIR=$(GF2X_PREFIX)/lib
# directory containing libgf2x.a

GF2X_OPT_INCDIR=# -I$(GF2X_INCDIR) # GF2X
GF2X_OPT_LIBDIR=# -L$(GF2X_LIBDIR) # GF2X
GF2X_OPT_LIB=# -lgf2x # GF2X
# uncomment these if using gf2x


###############################################################
#
# Fourth, if you do not want to run the wizard that automagically
# sets some performace related flags in config.h, set the flag below.
#
###############################################################


WIZARD=on
# Set to off if you want to bypass the wizard; otherwise, set to on.


#################################################################
#
#  That's it!  You can ignore everything else in this file!
#
#################################################################


# object files

O01=FFT.o FacVec.o GF2.o GF2E.o GF2EX.o GF2EXFactoring.o GF2X.o GF2X1.o
O02=$(O01) GF2XFactoring.o GF2XVec.o GetTime.o HNF.o ctools.o LLL.o LLL_FP.o
O03=$(O02) LLL_QP.o LLL_RR.o LLL_XD.o RR.o WordVector.o ZZ.o ZZVec.o
O04=$(O03) ZZX.o ZZX1.o ZZXCharPoly.o ZZXFactoring.o ZZ_p.o ZZ_pE.o ZZ_pEX.o
O05=$(O04) ZZ_pEXFactoring.o ZZ_pX.o ZZ_pX1.o ZZ_pXCharPoly.o ZZ_pXFactoring.o
O06=$(O05) fileio.o lip.o lzz_p.o lzz_pE.o lzz_pEX.o lzz_pEXFactoring.o
O07=$(O06) lzz_pX.o lzz_pX1.o lzz_pXCharPoly.o lzz_pXFactoring.o
O08=$(O07) mat_GF2.o mat_GF2E.o mat_RR.o mat_ZZ.o mat_ZZ_p.o
O09=$(O08) mat_ZZ_pE.o mat_lzz_p.o mat_lzz_pE.o mat_poly_ZZ.o
O10=$(O09) mat_poly_ZZ_p.o mat_poly_lzz_p.o 
O11=$(O10) 
O12=$(O11) 
O13=$(O12) quad_float.o tools.o vec_GF2.o vec_GF2E.o
O14=$(O13) vec_RR.o vec_ZZ.o vec_ZZ_p.o vec_ZZ_pE.o
O15=$(O14) vec_lzz_p.o vec_lzz_pE.o 
O16=$(O15) 
O17=$(O16) 
O18=$(O17) xdouble.o
O19=$(O18) G_LLL_FP.o G_LLL_QP.o G_LLL_XD.o G_LLL_RR.o 

OBJ=$(O19)

# library source files


S01=FFT.c FacVec.c GF2.c GF2E.c GF2EX.c GF2EXFactoring.c GF2X.c GF2X1.c
S02=$(S01) GF2XFactoring.c GF2XVec.c HNF.c ctools.c LLL.c LLL_FP.c LLL_QP.c
S03=$(S02) LLL_RR.c LLL_XD.c RR.c WordVector.c ZZ.c ZZVec.c ZZX.c ZZX1.c
S04=$(S03) ZZXCharPoly.c ZZXFactoring.c ZZ_p.c ZZ_pE.c ZZ_pEX.c 
S05=$(S04) ZZ_pEXFactoring.c ZZ_pX.c ZZ_pX1.c ZZ_pXCharPoly.c
S06=$(S05) ZZ_pXFactoring.c fileio.c lip.c lzz_p.c lzz_pE.c lzz_pEX.c
S07=$(S06) lzz_pEXFactoring.c lzz_pX.c lzz_pX1.c
S08=$(S07) lzz_pXCharPoly.c lzz_pXFactoring.c mat_GF2.c mat_GF2E.c
S09=$(S08) mat_RR.c mat_ZZ.c mat_ZZ_p.c mat_ZZ_pE.c mat_lzz_p.c mat_lzz_pE.c
S10=$(S09) mat_poly_ZZ.c mat_poly_ZZ_p.c mat_poly_lzz_p.c 
S11=$(S10) 
S12=$(S11) 
S13=$(S12) quad_float.c tools.c vec_GF2.c vec_GF2E.c vec_RR.c
S14=$(S13) vec_ZZ.c vec_ZZ_p.c vec_ZZ_pE.c 
S15=$(S14) vec_lzz_p.c vec_lzz_pE.c 
S16=$(S15) 
S17=$(S16) 
S18=$(S17) xdouble.c
S19=$(S18) G_LLL_FP.c G_LLL_QP.c G_LLL_XD.c G_LLL_RR.c 

SRC = $(S19)

# library source files that are header files

SINC = c_lip_impl.h g_lip_impl.h





# library header files

IN01= FFT.h FacVec.h GF2.h GF2E.h GF2EX.h GF2EXFactoring.h GF2X.h
IN02=$(IN01) GF2XFactoring.h GF2XVec.h HNF.h ctools.h LLL.h 
IN03=$(IN02) RR.h SPMM_ASM.h WordVector.h ZZ.h ZZVec.h ZZX.h ZZXFactoring.h 
IN04=$(IN03) ZZ_p.h ZZ_pE.h ZZ_pEX.h ZZ_pEXFactoring.h ZZ_pX.h ZZ_pXFactoring.h
IN05=$(IN04) fileio.h lip.h lzz_p.h lzz_pE.h lzz_pEX.h lzz_pEXFactoring.h
IN06=$(IN05) lzz_pX.h lzz_pXFactoring.h mat_GF2.h mat_GF2E.h mat_RR.h
IN07=$(IN06) mat_ZZ.h mat_ZZ_p.h mat_ZZ_pE.h mat_lzz_p.h mat_lzz_pE.h
IN08=$(IN07) mat_poly_ZZ.h mat_poly_ZZ_p.h mat_poly_lzz_p.h matrix.h
IN09=$(IN08) pair.h vector.h pair_GF2EX_long.h pair_GF2X_long.h
IN10=$(IN09) pair_ZZX_long.h pair_ZZ_pEX_long.h pair_ZZ_pX_long.h
IN11=$(IN10) pair_lzz_pEX_long.h pair_lzz_pX_long.h quad_float.h
IN12=$(IN11) tools.h vec_GF2.h vec_GF2E.h vec_GF2XVec.h vec_RR.h
IN13=$(IN12) vec_ZZ.h vec_ZZVec.h vec_ZZ_p.h vec_ZZ_pE.h vec_double.h
IN14=$(IN13) vec_long.h vec_lzz_p.h vec_lzz_pE.h vec_quad_float.h
IN15=$(IN14) vec_vec_GF2.h vec_vec_GF2E.h vec_vec_RR.h vec_vec_ZZ.h
IN16=$(IN15) vec_vec_ZZ_p.h vec_vec_ZZ_pE.h vec_vec_long.h vec_vec_lzz_p.h
IN17=$(IN16) vec_vec_lzz_pE.h vec_xdouble.h xdouble.h config.h version.h
IN18=$(IN17) def_config.h new.h vec_ulong.h vec_vec_ulong.h c_lip.h g_lip.h

INCL=$(IN18)



# test data

TD1=BerlekampTestIn BerlekampTestOut CanZassTestIn CanZassTestOut 
TD2=$(TD1) ZZXFacTestIn ZZXFacTestOut MoreFacTestIn LLLTestIn LLLTestOut RRTestIn RRTestOut 
TD3=$(TD2) MatrixTestIn MatrixTestOut CharPolyTestIn  
TD4=$(TD3) CharPolyTestOut QuadTestIn QuadTestOut

TD = $(TD4)

# test source files

TS1=QuickTest.c BerlekampTest.c CanZassTest.c ZZXFacTest.c MoreFacTest.c LLLTest.c
TS2=$(TS1) subset.c MatrixTest.c CharPolyTest.c RRTest.c QuadTest.c
TS3=$(TS2) GF2XTest.c GF2EXTest.c BitMatTest.c ZZ_pEXTest.c lzz_pEXTest.c

TS = $(TS3)

# scripts

SCRIPTS1=MakeGetTime TestScript dosify unixify RemoveProg 
SCRIPTS2=$(SCRIPTS1) configure DoConfig mfile cfile

SCRIPTS=$(SCRIPTS2)

# auxilliary source

MD=MakeDesc.c MakeDescAux.c newnames.c gen_lip_gmp_aux.c gen_gmp_aux.c

GT=GetTime1.c GetTime2.c GetTime3.c GetTime4.c GetTime5.c TestGetTime.c


# documentation


D01=copying.txt GF2.txt GF2E.txt GF2EX.txt GF2EXFactoring.txt GF2X.txt
D02=$(D01) GF2XFactoring.txt GF2XVec.txt HNF.txt LLL.txt RR.txt
D03=$(D02) ZZ.txt ZZVec.txt ZZX.txt ZZXFactoring.txt ZZ_p.txt ZZ_pE.txt
D04=$(D03) ZZ_pEX.txt ZZ_pEXFactoring.txt ZZ_pX.txt ZZ_pXFactoring.txt
D05=$(D04) conversions.txt flags.txt lzz_p.txt lzz_pE.txt lzz_pEX.txt
D06=$(D05) lzz_pEXFactoring.txt lzz_pX.txt lzz_pXFactoring.txt mat_GF2.txt
D07=$(D06) mat_GF2E.txt mat_RR.txt mat_ZZ.txt mat_ZZ_p.txt mat_ZZ_pE.txt
D08=$(D07) mat_lzz_p.txt mat_lzz_pE.txt mat_poly_ZZ.txt mat_poly_ZZ_p.txt
D09=$(D08) mat_poly_lzz_p.txt matrix.txt pair.txt vector.txt
D10=$(D09) quad_float.txt sedscript.txt tools.txt vec_GF2.txt
D11=$(D10) vec_GF2E.txt vec_RR.txt vec_ZZ.txt vec_ZZ_p.txt vec_ZZ_pE.txt
D12=$(D11) vec_lzz_p.txt vec_lzz_pE.txt xdouble.txt names.txt
D13=$(D12) tour-ack.html tour-intro.html tour-time.html tour-changes.html
D14=$(D13) tour-modules.html tour-stdcxx.html tour-unix.html tour-examples.html
D15=$(D14) tour-roadmap.html tour-win.html tour-impl.html tour-struct.html
D16=$(D15) tour.html tour-ex1.html tour-ex2.html tour-ex3.html tour-ex4.html
D17=$(D16) tour-ex5.html tour-ex6.html arrow1.gif arrow2.gif arrow3.gif
D18=$(D17) tour-gmp.html tour-gf2x.html tour-tips.html config.txt version.txt

DOC = $(D18)



# test program executables

PROG1=QuickTest BerlekampTest CanZassTest ZZXFacTest MoreFacTest LLLTest  BitMatTest
PROG2=$(PROG1) MatrixTest CharPolyTest RRTest QuadTest 
PROG3=$(PROG2) GF2XTest GF2EXTest subset ZZ_pEXTest lzz_pEXTest
PROGS = $(PROG3)

# things to save to a tar file

SFI1=makefile $(SRC) $(SINC) $(SCRIPTS) $(MD) $(GT) $(TS) $(TD) mach_desc.win 
SFI2=$(SFI1) MulTimeTest.c PolyTimeTest.c Poly1TimeTest.c GF2XTimeTest.c  
SFI3=$(SFI2) InitSettings.c DispSettings.c  WizardAux Wizard def_makefile
SFILES=$(SFI3)


#################################################################
#
#  Rules for compiling the library
#
#################################################################


NTL_INCLUDE = -I../include -I.
# NTL needs this to find its include files

COMPILE = $(CC) $(NTL_INCLUDE) $(CPPFLAGS) $(CFLAGS) -c
COMPILE_CXX = $(CXX) $(NTL_INCLUDE) $(CPPFLAGS) $(CXXFLAGS) -c

LINK = $(CC) $(NTL_INCLUDE) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS)
LINK_CXX = $(CXX) $(NTL_INCLUDE) $(CPPFLAGS) $(CXXFLAGS) $(LDFLAGS_CXX)



# 'make all' does a complete make, including all setup.
# It also creates the file 'all', which means you should
# run 'make clobber' before running 'make' or 'make all'
# again.

all:
	make setup1
	make setup2
	make setup3
	make setup4
	make ntl.a
	touch all


# setup1 generates the file ../incluse/NTL/mach_desc.h

setup1:
	$(COMPILE) MakeDescAux.c
	$(LINK) -o MakeDesc MakeDesc.c MakeDescAux.o $(LDLIBS)
	./MakeDesc
	mv mach_desc.h ../include/NTL/mach_desc.h

# setup2 generates the file GetTime.c

setup2:
	sh MakeGetTime "$(LINK)" "$(LDLIBS)"

# setup3 generates the files lip_gmp_aux_impl.h and ../include/NTL/gmp_aux.h
# The file lip_gmp_aux_impl.h is included when lip.c when NTL_GMP_HACK is set.
# The file ../include/NTL/gmp_aux.h is included in ../include/NTL/lip.h
# when NTL_GMP_LIP is set.
# When these flags are not set, empty files are produced.

setup3:
	$(LINK) $(GMP_OPT_INCDIR) -o gen_lip_gmp_aux gen_lip_gmp_aux.c $(GMP_OPT_LIBDIR) $(GMP_OPT_LIB) $(LDLIBS)
	./gen_lip_gmp_aux > lip_gmp_aux_impl.h
	$(LINK) $(GMP_OPT_INCDIR) -o gen_gmp_aux gen_gmp_aux.c $(GMP_OPT_LIBDIR) $(GMP_OPT_LIB) $(LDLIBS)
	./gen_gmp_aux > ../include/NTL/gmp_aux.h

# setup4 runs the wizard

setup4:
	sh Wizard $(WIZARD)


ntl.a:	$(OBJ) 
	$(AR) $(ARFLAGS) ntl.a $(OBJ) #LSTAT
	- $(RANLIB) ntl.a #LSTAT
# 	$(LIBTOOL) --mode=link $(LINK_CXX) -o libntl.la $(OBJ:.o=.lo) $(GMP_OPT_LIBDIR) $(GMP_OPT_LIB) $(GF2X_OPT_LIBDIR) $(GF2X_OPT_LIB) $(LDLIBS_CXX) -rpath $(LIBDIR) -version-info `cat VERSION_INFO` #LSHAR

LCOMP= #LSTAT
# LCOMP=$(LIBTOOL) --mode=compile #LSHAR

lip.o:	lip.c g_lip_impl.h c_lip_impl.h lip_gmp_aux_impl.h
	$(LCOMP) $(COMPILE) $(GMP_OPT_INCDIR) lip.c

ctools.o:	ctools.c
	$(LCOMP) $(COMPILE) ctools.c


GetTime.o: GetTime.c 
	$(LCOMP) $(COMPILE) GetTime.c



.c.o: 
	$(LCOMP) $(COMPILE_CXX) $(GF2X_OPT_INCDIR) $<

.c: 
	$(LINK_CXX) -o $@ $< ntl.a $(GMP_OPT_LIBDIR) $(GMP_OPT_LIB) $(GF2X_OPT_LIBDIR) $(GF2X_OPT_LIB) $(LDLIBS_CXX) #LSTAT
# 	$(LIBTOOL) --mode=link $(LINK_CXX) -o $@ $< libntl.la #LSHAR

#################################################################
#
# Rule for running tests
# make check runs a series of tests
#
#################################################################

check:
	sh RemoveProg $(PROGS)
	make QuickTest
	./QuickTest
	sh RemoveProg QuickTest
	sh TestScript

#################################################################
#
# Rule for installing
# make install just does a simple copy of the include file
#   and library.  The -p option is used to preserve file attributes.
#   This helps avoid some problems (especially when copying ntl.a).
#   Also, an attempt is made to make everything that is
#   installed readable by everyone.
#   
# make uninstall removes these files
#   
#################################################################




install:
	mkdir -p -m 755 $(INCLUDEDIR)
	rm -rf $(INCLUDEDIR)/NTL
	mkdir -m 755 $(INCLUDEDIR)/NTL
	cp -p ../include/NTL/*.h $(INCLUDEDIR)/NTL
	- chmod -R a+r $(INCLUDEDIR)/NTL
	mkdir -p -m 755 $(DOCDIR)
	rm -rf $(DOCDIR)/NTL
	mkdir -m 755 $(DOCDIR)/NTL
	cp -p ../doc/*.txt $(DOCDIR)/NTL
	cp -p ../doc/*.html $(DOCDIR)/NTL
	cp -p ../doc/*.gif $(DOCDIR)/NTL
	- chmod -R a+r $(DOCDIR)/NTL
	mkdir -p -m 755 $(LIBDIR)
	cp -p ntl.a $(LIBDIR)/libntl.a #LSTAT
	- chmod a+r $(LIBDIR)/libntl.a #LSTAT
# 	$(LIBTOOL) --mode=install cp -p libntl.la $(LIBDIR) #LSHAR


uninstall:
	rm -f $(LIBDIR)/libntl.a #LSTAT
# 	$(LIBTOOL) --mode=uninstall rm -f $(LIBDIR)/libntl.la #LSHAR
	rm -rf $(INCLUDEDIR)/NTL
	rm -rf $(DOCDIR)/NTL

#################################################################
#
#  Rules for cleaning up
#
#  make clobber removes *everything* created by make,
#    but it does not restore config.h to its default.
#
#  make clean tidies up a bit
#
#################################################################

clobber:	
	rm -f ntl.a mach_desc.h ../include/NTL/mach_desc.h  GetTime.c 
	rm -f lip_gmp_aux_impl.h ../include/NTL/gmp_aux.h
	sh RemoveProg $(PROGS) MakeDesc TestGetTime gen_lip_gmp_aux gen_gmp_aux
	rm -f *.o
	rm -rf small
	rm -f cfileout mfileout
	rm -rf .libs *.lo libntl.la
	rm -f all

clean:
	sh RemoveProg MakeDesc TestGetTime gen_lip_gmp_aux gen_gmp_aux
	rm -f *.o 
	rm -rf small
# 	- $(LIBTOOL) --mode=clean rm -f libntl.la *.lo #LSHAR

#################################################################
#
#  Rules for making tar and zip files
#
#  make package creates a tar.gz file suitable for Unix
#
#  make winpack creates a zip file suitable for Windows
#
#################################################################


package:
	sh unixify "$(SFILES) DIRNAME WINDIR VERSION_INFO NOTES" "$(INCL)" "$(DOC)" 
	rm -rf `cat DIRNAME`
	rm -f `cat DIRNAME`.tar
	rm -f `cat DIRNAME`.tar.gz
	mv unix `cat DIRNAME`
	chmod -R a+rX `cat DIRNAME`
	tar -cvf `cat DIRNAME`.tar `cat DIRNAME`
	gzip `cat DIRNAME`.tar
	rm -rf `cat DIRNAME`

winpack:
	sh dosify "$(SRC)" "$(INCL)" "$(DOC)" "$(TS)" "$(TD)" "$(SINC)"
	rm -rf `cat WINDIR`
	rm -f `cat WINDIR`.zip 
	mv dos `cat WINDIR`
	chmod -R a+rX `cat WINDIR`
	find ./`cat WINDIR` '!' -name '*.gif' -print | zip -l `cat WINDIR` -@
	find ./`cat WINDIR` -name '*.gif' -print | zip -u `cat WINDIR` -@
	rm -rf `cat WINDIR`


######################################################################
#
#  config wizard related stuff
#
######################################################################

WO1 = FFT.o  GetTime.o ctools.o ZZ.o ZZVec.o ZZ_p.o ZZ_pX.o
WO2 = $(WO1) ZZ_pX1.o lip.o tools.o vec_ZZ.o vec_ZZ_p.o 
WO3 = $(WO2) GF2.o WordVector.o vec_GF2.o GF2X.o GF2X1.o

WOBJ = $(WO3)

# wntl.a: LCOMP= #LSHAR
wntl.a:	$(WOBJ) 
	$(AR) $(ARFLAGS) wntl.a $(WOBJ)
	- $(RANLIB) wntl.a

MulTimeTest:
	$(LINK_CXX) -o MulTimeTest MulTimeTest.c wntl.a  $(GMP_OPT_LIBDIR) $(GMP_OPT_LIB)  $(LDLIBS_CXX)

PolyTimeTest:
	$(LINK_CXX) -o PolyTimeTest PolyTimeTest.c wntl.a  $(GMP_OPT_LIBDIR) $(GMP_OPT_LIB) $(LDLIBS_CXX)

Poly1TimeTest:
	$(LINK_CXX) -o Poly1TimeTest Poly1TimeTest.c wntl.a  $(GMP_OPT_LIBDIR) $(GMP_OPT_LIB) $(LDLIBS_CXX)


GF2XTimeTest:
	$(LINK_CXX) -o GF2XTimeTest GF2XTimeTest.c wntl.a  $(GMP_OPT_LIBDIR) $(GMP_OPT_LIB) $(LDLIBS_CXX)

InitSettings:
	$(LINK_CXX) -o InitSettings InitSettings.c  $(LDLIBS_CXX)


DispSettings:
	$(LINK_CXX) -o DispSettings DispSettings.c $(LDLIBS_CXX)




