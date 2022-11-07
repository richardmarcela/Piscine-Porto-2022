#!/bin/sh
cat /etc/passwd | cut -f1 -d ':' | sed '1~2d' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | sed -z 's/\n/, /g;s/, $/./'
