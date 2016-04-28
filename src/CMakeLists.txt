set(CMAKE_INCLUDE_CURRENT_DIR ON)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCE)
file(GLOB UI_FILES *.ui)
qt5_wrap_ui(UIS ${UI_FILES})

add_executable(${PROJECT_NAME} ${SOURCE} ${UIS})
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

