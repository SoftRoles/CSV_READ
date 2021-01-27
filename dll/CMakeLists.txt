cmake_minimum_required(VERSION 2.8.9)
project(csv_read)

#Bring the headers, such as Student.h into the project
include_directories(include)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

#Generate the shared library from the sources
add_library(csv_read SHARED ${SOURCES})

if (WIN32)
	include (GenerateExportHeader)          
GENERATE_EXPORT_HEADER(csv_read           # generates the export header CSV_READ_EXPORTS.h automatically
    BASE_NAME csv_read
    STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC)
endif (WIN32)

target_link_libraries(csv_read)