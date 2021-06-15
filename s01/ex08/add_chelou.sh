FT_NBR1_B5="$(echo $FT_NBR1 | tr \''\\\"\?\!' '01234')"

FT_NBR2_B5="$(echo $FT_NBR2 | tr 'mrdoc' '01234')"

SUM_B13=$(echo "obase=13;ibase=5;$FT_NBR1_B5 + $FT_NBR2_B5" | bc)

echo $SUM_B13 | tr '0123456789ABC' 'gtaio luSnemf' 
