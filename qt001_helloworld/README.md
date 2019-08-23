g++ helloworld.cpp -o helloworld 

g++  helloworld.cpp \
-I"D:\Qt\Qt5.9.8\5.9.8\mingw53_32\include" \
-L "D:\Qt\Qt5.9.8\5.9.8\mingw53_32\lib" \
-lQt5Core \
-lQt5Gui \
-lQt5Widgets \
-o helloworld