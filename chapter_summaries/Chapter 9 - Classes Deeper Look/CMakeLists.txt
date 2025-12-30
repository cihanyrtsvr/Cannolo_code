# FIX 2: This file only handles its own folder. 
# It does NOT look for other folders.
add_executable(run_Chapter9 main.cpp MyTime.cpp)

target_include_directories(run_chapterSum PUBLIC .)