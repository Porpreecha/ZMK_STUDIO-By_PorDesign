# Add shield as a ZMK module
zephyr_library()
zephyr_library_include_directories(${CMAKE_CURRENT_LIST_DIR})

if(CONFIG_ZMK_STUDIO)
    zephyr_library_sources_ifdef(CONFIG_ZMK_STUDIO
        ${CMAKE_CURRENT_LIST_DIR}/dummy_studio.c
    )
endif()
