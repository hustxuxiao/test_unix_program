#!/bin/bash

a=$(echo "2492 + 145.2 + 106 + 13 + 26 + 65 + 135.2 + 10" | bc)

echo "total fee is $a"
