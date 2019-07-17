#test_script
mkdir -p build
cd build
cmake ..
if [[ $? -eq 0 ]]; then
    make
fi
if [[ $? -eq 0 ]]; then
    ./runTests
fi
