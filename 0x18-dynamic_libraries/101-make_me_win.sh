#!/bin/bash
wget -P /tmp https://github.com/SeifKhaled13/alx-low_level_programming/raw/master/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so
