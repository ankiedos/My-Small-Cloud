echo "Performing build step for target test_preproc.cpp..."
echo "g++ -E tests/test.cpp -std=c++2a -I. > tests/test_preproc.cpp"
g++ -E tests/test.cpp -std=c++2a -I. > tests/test_preproc.cpp
echo "Target test_preproc.cpp can be found in tests directory."
echo "Performing build step for target test.exe..."
g++ tests/test.cpp -o bin/test -std=c++2a -I. -fconcepts
echo "g++ tests/test.cpp -o bin/test -std=c++2a -I. -fconcepts"
echo "Target test can be found in bin directory."