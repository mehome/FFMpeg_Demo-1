
cmake_minimum_required(VERSION 3.8)

set(TARGET_NAME FFMpeg_Configuration)

add_executable(${TARGET_NAME} ffmpeg_configuration.cpp)

target_link_libraries(${TARGET_NAME}
        avcodec
        avdevice
        avfilter
        avformat
        avutil
        postproc
        swresample
        swscale
        )

add_dependencies(${TARGET_NAME} copy_runtime)

