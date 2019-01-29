#!/bin/sh
INPUT="$1"
echo $INPUT
dt=$(date '+%d/%m/%Y %H:%M:%S');
echo "$dt"
git add -u
git commit -m "$INPUT ($dt)"
git push origin master
