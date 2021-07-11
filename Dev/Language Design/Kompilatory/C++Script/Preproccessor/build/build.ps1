Write-Output "Performing build step for target test_preproc.cpp..."
Write-Output "g++ -E tests\test.cpp -std=c++2a -I. > tests\test_preproc.cpp"
g++ -E tests\test.cpp -std=c++2a -I. > tests\test_preproc.cpp
Write-Output "Target test_preproc.cpp can be found in tests directory."
Write-Output "Performing build step for target test.exe..."
Write-Output "g++ tests\test.cpp -o bin\test -std=c++2a -I. -fconcepts"
g++ tests\test.cpp -o bin\test -std=c++2a -I. -fconcepts
Write-Output "Target test.exe can be found in bin directory."