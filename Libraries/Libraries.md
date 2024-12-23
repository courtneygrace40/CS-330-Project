# Libraries in C++

Libraries are used in C++ with #include \<libraryName\> at the top of a file. One of the most common libraries, #include \<iostream\>, is used in nearly every C++ file because it allows for the input and output of information to and from the terminal. 

## How To Use Libraries

Many libraries are included when C++ is downloaded, but some are more complex. The more complex libraries must be downloaded through the computer terminal. Every library is different, but most (on Mac) can use "homebrew" to download. 

### Downloading Homebrew

To download Homebrew, you need to follow these steps:   
1. Open Terminal
2. Enter this command exactly: /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
3. Check to see if it is installed correctly by entering this command: brew help
4. If these steps don't work, visit the Homebrew website here: https://brew.sh/

### Example Library: NCurses

Here is an example of how to download libraries with Homebrew:   
1. Open Terminal
2. Enter this command: brew install ncurses
3. To check if this worked, try the #include \<curses.h\>

### Example Library: SFML

Here is an example of how to download libraries manually:   
1. Go to https://www.sfml-dev.org/download/sfml/2.6.1/
2. Download the correct SFML version based on your operating system
3. Unzip the files
4. Move all of the files from the "frameworks" folder to the /Library/Frameworks folder (if you are using a Mac)
5. To set up VS Code, follow the instructions at this link: https://www.sfml-dev.org/tutorials/2.6/start-vc.php

### Library Use Links

Here is a collection of where I got my information on implementing some of these libraries in code:  

**NCurses:**
1. https://dev.to/tbhaxor/introduction-to-ncurses-part-1-1bk5
2. https://invisible-island.net/ncurses/ncurses-intro.html

**SFML:**
1. https://www.sfml-dev.org/tutorials/2.6/audio-sounds.php

**Chrono:**
1. https://www.geeksforgeeks.org/chrono-in-c/
2. https://en.cppreference.com/w/cpp/chrono/time_point

**Threads:**
1. https://www.geeksforgeeks.org/multithreading-in-cpp/

