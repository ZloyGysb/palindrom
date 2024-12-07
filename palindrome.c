#!/bin/bash
palindrome(){
	slovo="$1"
	slovo_naoborot=$( echo "$slovo" | rev)
	if [ "$slovo" == "$slovo_naoborot" ];
		then
		echo "$slovo - palindrom."
	else
		echo "$slovo - ne palindrom."
	fi
}
for slovo in "$@";
	do
	palindrome "$slovo"
done
if [ $# == 0 ];
        then
        echo "Pozhaluysta, vvrdite hotya by odno slovo."
fi
