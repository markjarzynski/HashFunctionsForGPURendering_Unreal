#!/bin/sh

SRC='Saved/Screenshots/Mac'

for i in `cat hashes.txt`
do
    screenshot=`ls $SRC | head -n 1`
    mv $SRC/$screenshot $i.png
done
