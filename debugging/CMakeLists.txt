add_executable(breakpoints-1 breakpoints-1.cpp)
target_compile_features(breakpoints-1 PUBLIC cxx_std_20)

add_executable(breakpoints-2 breakpoints-2.cpp)
target_compile_features(breakpoints-2 PUBLIC cxx_std_20)

add_executable(callstacks callstacks.cpp)
target_compile_features(callstacks PUBLIC cxx_std_20)

add_executable(edit-and-continue edit-and-continue.cpp)
target_compile_features(edit-and-continue PUBLIC cxx_std_20)
# target_compile_options(edit-and-continue PUBLIC "/ZI" "/INCREMENTAL")

add_executable(step-into-specific step-into-specific.cpp)
target_compile_features(step-into-specific PUBLIC cxx_std_20)

add_executable(watchwindow watchwindow.cpp)
target_compile_features(watchwindow PUBLIC cxx_std_20)
