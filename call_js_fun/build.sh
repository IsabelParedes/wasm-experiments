#! /bin/bash

emcc -lembind -o output.html --pre-js log_msg.js simple_fun.cpp 