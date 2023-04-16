#!/bin/sh
if [ xmaple = xmaple ]; then
  echo "Skipping multiplication test (needs Maple, which is not installed)"
  exit 0
fi
echo > integration/randomPolys.txt
echo > integration/results.txt
maple -q integration/multiplyTest.mpl
if [ "$?" -ne 0 ]; then echo "Multiplication test failed"; exit 1; fi 
