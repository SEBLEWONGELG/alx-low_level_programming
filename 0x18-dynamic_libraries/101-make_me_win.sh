<<<<<<< HEAD
#!/bin/bash
wget -q -O /tmp/cheatme.so https://github.com/rolandoquiroz/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/cheatme.so
export LD_PRELOAD=/tmp/cheatme.so
=======
#!/bin/bash
gcc *.o -fPIC -shared -o libruin.so
LD_PRELOAD=$PWD/libruin.so
>>>>>>> 13b59d7844dca86d53ef66471e390ee120e18021
