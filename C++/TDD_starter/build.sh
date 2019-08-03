#test_script
mkdir -p build
cd build
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -DBUILD_TESTS=1
if [[ $? -eq 0 ]]; then
    # link compile_commands.json to root folder for `clangd`
    rm -f ../compile_commands.json
    ln -s ./build/compile_commands.json ../compile_commands.json

    # build
    cmake --build .
fi
