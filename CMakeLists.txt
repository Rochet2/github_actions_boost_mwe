# From https://stackoverflow.com/a/3917033/3586583

FIND_PACKAGE( Boost 1.70 REQUIRED system filesystem program_options iostreams regex )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

ADD_EXECUTABLE( example example.cpp )

TARGET_LINK_LIBRARIES( example LINK_PUBLIC ${Boost_LIBRARIES} )
