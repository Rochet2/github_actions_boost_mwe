# From https://stackoverflow.com/a/3917033/3586583

add_subdirectory(cmake)

ADD_EXECUTABLE( example example.cpp )

TARGET_LINK_LIBRARIES( example LINK_PUBLIC ${Boost_LIBRARIES} )
