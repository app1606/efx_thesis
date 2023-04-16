#!/bin/sh
## Maple purports to support "exiting with nonzero exit code on error", via
## command line option "-e 2", or "interface(errorbreak=2)", but it simply DOES NOT WORK.
## So just grep for "error". --mkoeppe
maple -q $@ 2>&1 | perl -pe 'END { exit $status } $status=1 if /error/i;' 
