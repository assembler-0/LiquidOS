#!/usr/bin/env bash

set -e

# Update the core incase of updates

REPO_URL="https://github.com/VOXIDEVOSTRO/Modularus.git"
TMP_DIR="./Temp"

rm -rf ./Core
rm -rf "$TMP_DIR"
mkdir -p $TMP_DIR
cd $TMP_DIR
git clone "$REPO_URL"
cd Modularus

if [ ! -d "./Core" ]; then
    echo "Core not found in clone"
    rm -rf "$TMP_DIR"
    exit 1
fi

cp -r ./Core ../..
cd ../..
rm -rf "$TMP_DIR"

echo "Done"
