#!/bin/bash

# error handling
# if [ $# -lt 3 ]
# then
#     echo "before after filename"
#     exit 1
# fi

# arguments,  args = all ,extra_args = first second
# args=$*
# extra_args="$1 $2"
# files=${args#$extra_args}

# array
# array=()
# darray=()
# for((i = 1; i < 10; i++)){
#     array+=("$i")
#     darray+=("0$i")
# }

# replace 
# for((i = 1; i < 10; i++)){
# for f in  ${array[$i]}*
# do 
#     mv $f ${f/${array[i]}/${darray[i]}}
# done
# }

# array=("B" "C" "D")

# for f in 10*
# do
#     for((j = 0; j < 3; j++)); do
#         cp $f ${f/"A"/${array[$j]}}
#     done
# done
