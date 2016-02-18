make 2> TMP
cat TMP | sed -n -e 's/^.*undefined reference to//p' | sort | uniq > deps.txt
sed -i '/memcpy\|memset\|memcmp\|malloc\|free/d' deps.txt
rm TMP
