if(NOT OPTION_DEDICATED)
    add_files(
        allegro_m.cpp
        allegro_m.h
        CONDITION Allegro_FOUND
    )

    add_files(
        fluidsynth.cpp
        fluidsynth.h
        CONDITION Fluidsynth_FOUND
    )

    add_files(
        libtimidity.cpp
        libtimidity.h
        CONDITION Timidity_FOUND
    )

    add_files(
        cocoa_m.cpp
        cocoa_m.h
        CONDITION APPLE
    )

    add_files(
        dmusic.cpp
        dmusic.h
        win32_m.cpp
        win32_m.h
        CONDITION WIN32
    )

    add_files(
        extmidi.cpp
        extmidi.h
        CONDITION UNIX
    )

    add_files(
        bemidi.cpp
        bemidi.h
        CONDITION HAIKU
    )

    add_files(
        midi.h
        midifile.cpp
        midifile.hpp
    )
endif()

add_files(
    music_driver.hpp
    null_m.cpp
    null_m.h
)
