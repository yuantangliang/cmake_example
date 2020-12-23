
set(TOOLCHAIN_PATH  /media/meter/data_bin/v3s/lichee/out/sun8iw8p1/linux/common/buildroot/external-toolchain/bin/)

# specify the cross compiler
SET(CMAKE_C_COMPILER   ${TOOLCHAIN_PATH}arm-linux-gnueabi-gcc)
SET(CMAKE_CXX_COMPILER ${TOOLCHAIN_PATH}arm-linux-gnueabi-g++)

# where is the target environment 输出目录
#SET(CMAKE_FIND_ROOT_PATH  /home/meter/tftpd)

# search for programs in the build host directories (not necessary)
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# for libraries and headers in the target directories
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
