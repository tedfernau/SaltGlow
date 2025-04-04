include("${CMAKE_CURRENT_LIST_DIR}/rule.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/file.cmake")
set(salt_booklamp_default_library_list )
# Handle files with suffix (s|as|asm|AS|ASM|As|aS|Asm) 
if(salt_booklamp_default_FILE_GROUP_assemble)
    add_library(salt_booklamp_default_assemble OBJECT ${salt_booklamp_default_FILE_GROUP_assemble})
    salt_booklamp_default_assemble_rule(salt_booklamp_default_assemble)
    list(APPEND salt_booklamp_default_library_list "$<TARGET_OBJECTS:salt_booklamp_default_assemble>")
endif()

# Handle files with suffix S 
if(salt_booklamp_default_FILE_GROUP_assemblePreprocess)
    add_library(salt_booklamp_default_assemblePreprocess OBJECT ${salt_booklamp_default_FILE_GROUP_assemblePreprocess})
    salt_booklamp_default_assemblePreprocess_rule(salt_booklamp_default_assemblePreprocess)
    list(APPEND salt_booklamp_default_library_list "$<TARGET_OBJECTS:salt_booklamp_default_assemblePreprocess>")
endif()

# Handle files with suffix [cC] 
if(salt_booklamp_default_FILE_GROUP_compile)
    add_library(salt_booklamp_default_compile OBJECT ${salt_booklamp_default_FILE_GROUP_compile})
    salt_booklamp_default_compile_rule(salt_booklamp_default_compile)
    list(APPEND salt_booklamp_default_library_list "$<TARGET_OBJECTS:salt_booklamp_default_compile>")
endif()

if (BUILD_LIBRARY)
        message(STATUS "Building LIBRARY")
        add_library(${salt_booklamp_default_image_name} ${salt_booklamp_default_library_list})
        foreach(lib ${salt_booklamp_default_FILE_GROUP_link})
        target_link_libraries(${salt_booklamp_default_image_name} PRIVATE ${CMAKE_CURRENT_LIST_DIR} /${lib})
        endforeach()
        add_custom_command(
            TARGET ${salt_booklamp_default_image_name}
    COMMAND ${CMAKE_COMMAND} -E make_directory ${salt_booklamp_default_output_dir}
    COMMAND ${CMAKE_COMMAND} -E copy lib${salt_booklamp_default_image_name}.a ${salt_booklamp_default_output_dir}/${salt_booklamp_default_original_image_name})
else()
    message(STATUS "Building STANDARD")
    add_executable(${salt_booklamp_default_image_name} ${salt_booklamp_default_library_list})
    foreach(lib ${salt_booklamp_default_FILE_GROUP_link})
    target_link_libraries(${salt_booklamp_default_image_name} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/${lib})
endforeach()
    salt_booklamp_default_link_rule(${salt_booklamp_default_image_name})
    
add_custom_command(
    TARGET ${salt_booklamp_default_image_name}
    COMMAND ${CMAKE_COMMAND} -E make_directory ${salt_booklamp_default_output_dir}
    COMMAND ${CMAKE_COMMAND} -E copy ${salt_booklamp_default_image_name} ${salt_booklamp_default_output_dir}/${salt_booklamp_default_original_image_name})
endif()
