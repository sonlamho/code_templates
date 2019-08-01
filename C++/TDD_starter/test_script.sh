#test_script
mkdir -p build
cd build
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1
if [[ $? -eq 0 ]]; then
    rm -f ../compile_commands.json
    ln -s ./build/compile_commands.json ../compile_commands.json
    cmake --build .
fi
if [[ $? -eq 0 ]]; then
    ./runTests
fi
