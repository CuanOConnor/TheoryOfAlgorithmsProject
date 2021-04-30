echo "Checking file input.txt."
expec="$(SHA512 input.txt)"
myout="$(./SHA512 input.txt)  input.txt"
echo "Expected: " $expec
echo "Output:   " $myout
if [[ $myout == $expec ]]; then
    echo "Pass"
else
    echo "Fail"
fi