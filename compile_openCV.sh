cmake -D CMAKE_INSTALL_PREFIX=/usr/local -D CMAKE_BUILD_TYPE=Release -D OPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules -D WITH_IPP=OFF -D PYTHON_DEFAULT_EXECUTABLE=/home/swliu/anaconda3/bin/python3 -D BUILD_opencv_python3=ON -D BUILD_opencv_python2=OFF -D PYTHON3_EXCUTABLE=/home/swliu/anaconda3/bin/python3  -D PYTHON3_INCLUDE_DIR=/home/swliu/anaconda3/include/python3.7m -D PYTHON3_LIBRARY=/home/swliu/anaconda3/lib/libpython3.7m.so ..