echo "Running git clone script"
mkdir systems && cd "$_"
for i in {0..23}
do
    if ((i < 10))
    then
        git clone git@github.com:stevensll/work0$i
    else
        git clone git@github.com:stevensll/work$i
    fi
done