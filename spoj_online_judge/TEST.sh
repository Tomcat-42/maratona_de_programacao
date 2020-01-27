#!/bin/bash

while read -r num; do
	[ "$num" -eq 42 ] && break
	nums+=("$num")
done

for num in "${nums[@]}"; do
	echo "$num"
done
