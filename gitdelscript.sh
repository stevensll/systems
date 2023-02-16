echo "Running git delete script"
for i in {2..23}
do
    if ((i < 10))
    then 
        curl \
        -X DELETE \
        -H "Authorization: Bearer <MYKEY>"\
        "https://api.github.com/repos/stevensll/work0$i"
        echo "Done"
    else
        curl \
        -X DELETE \
        -H "Authorization: Bearer <MYKEY"\
        "https://api.github.com/repos/stevensll/work$i"
        echo "Done"
    fi
done 

