#!/bin/sh
INPUT="$1"
echo $INPUT
git add -u
git commit -m "$INPUT"
git push origin master
