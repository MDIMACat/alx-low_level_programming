#!/bin/bash
echo-e '#include <stdio.h>\nunsigned int rand(void){ return 42;}\n'>fake_rand.c
gcc -shared -o fake_rand.so -fPIC fake_rand.c
