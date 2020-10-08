name: Valgrind

on:
  push:
    branches: [ main ]
  pull_request:
    branches: [ main ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v2
    - name: apt install dependency
      run: |
        sudo apt-get -y install valgrind
        sudo apt-get -y install libcunit1 libcunit1-doc libcunit1-dev 
    - name: make test
      run: |
        make test -C calculator/
        valgrind ./calculator/build/Test_Calculator.out
