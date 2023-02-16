echo "Running git delete script"
for i in {3..23}
do
    if ((i < 10))
    then
        cd "work0$i"
        rm -rf ".git"
        rm -rf ".gitignore"
        cd ..
        echo "Done"
    else
        cd "work$i"
        rm -rf ".git"
        rm -rf ".gitignore"
        cd ..
        echo "Done"
    fi
done 

