cat /etc/passwd | sed '/#/d' | sed '1!n;d' | cut -d : -f 1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed 's/$/, /g' | sed '$s/, /./' | tr -d '\n'
