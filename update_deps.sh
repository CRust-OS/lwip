make 2> TMP
cat TMP | sed -n -e 's/^.*undefined reference to//p' | sort | uniq > deps.txt
rm TMP

