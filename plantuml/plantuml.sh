#!/bin/bash

# note. this script must be named `plantuml.sh`
# note. depth `4` maybe enough
dir=$(find . -name 'plantuml.sh' -maxdepth 4 | xargs dirname | head -1)
if [ "." != "${dir}" ]; then
    pushd "${dir}"
fi

BIN_NAME='plantuml.jar'
BIN_URL='https://github.com/plantuml/plantuml/releases/download/v1.2024.8/plantuml-mit-1.2024.8.jar'

if [ ! -f "${BIN_NAME}" ]; then
    echo 'Executable is missing, downloading...'

    wget "${BIN_URL}" -O "${BIN_NAME}"
fi

echo 'Running executable...'

java -jar "${BIN_NAME}" "$@"
