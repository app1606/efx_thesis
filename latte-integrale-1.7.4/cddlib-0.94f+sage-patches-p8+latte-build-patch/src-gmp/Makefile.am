bin_PROGRAMS = \
scdd_gmp \
lcdd_gmp \
redcheck_gmp \
fourier_gmp \
projection_gmp \
adjacency_gmp \
allfaces_gmp \
testshoot_gmp \
testcdd1_gmp \
testcdd2_gmp \
testlp1_gmp \
testlp2_gmp \
testlp3_gmp \
cdd_both_reps_gmp 
#cddmathlink

scdd_gmp_SOURCES                   = simplecdd.c
lcdd_gmp_SOURCES                   = lcdd.c
redcheck_gmp_SOURCES               = redcheck.c
fourier_gmp_SOURCES                = fourier.c
projection_gmp_SOURCES             = projection.c
adjacency_gmp_SOURCES              = adjacency.c
allfaces_gmp_SOURCES               = allfaces.c
testshoot_gmp_SOURCES              = testshoot.c
testcdd1_gmp_SOURCES               = testcdd1.c
testcdd2_gmp_SOURCES               = testcdd2.c
testlp1_gmp_SOURCES                = testlp1.c
testlp2_gmp_SOURCES                = testlp2.c
testlp3_gmp_SOURCES                = testlp3.c
cdd_both_reps_gmp_SOURCES          = cdd_both_reps.c
# cddmathlink_SOURCES                = cddmathlink.c cddmlio.h cddmlio.c

LDADD        = ../lib-src-gmp/libcddgmp.la

INCLUDES     = -I$(srcdir)/../lib-src-gmp
INCLUDES    += $(GMP_CFLAGS)

AM_CPPFLAGS  = -DGMPRATIONAL
AM_LDFLAGS   = $(GMP_LIBS)
