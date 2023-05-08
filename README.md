# SPGL - Simple Password Generator for Linux

This is a simple command-line password generator written in C which asks for the length of the password to be generated and copies it to the clipboard.

## Prerequisites

To compile and run this program, you need to have these installed on your system.

+ gcc 
+ GLFW3

### Ubuntu/Debian - bash

    sudo apt-get install build-essential libglfw3-dev

### Fedora/RHEL - bash

    sudo dnf install gcc glfw-devel

### Arch Linux - bash

    sudo pacman -S gcc glfw

## Installation

To install and run the program, follow these steps:

### Clone the repository:

    git clone https://github.com/Di0n-0/SPGL.git

### Change into the repository directory:

    cd SPGL

### Compile the program:

    gcc main.c -o SPGL -I<include-dir> -L<library-dir> -lglfw3 -lX11 -lm

### Run the program:

    ./SPGL

## Adding to System Path

You might want to add the program to your path in order to avoid reopening the folder in which it resides to run it, to add the executable to the system path, you can add the following line to your ~/.bashrc file:

    export PATH=$PATH:/path/to/cloned/repo

Replace /path/to/cloned/repo with the actual path to the cloned repository. 
This will allow you to run the program from any directory in the terminal.

## Usage
        SPGL <length> // will generate password of length immediately 
        SPGL // will ask you for the length
+ Once you run the program, it will ask you for the length of the password to be generated if not already given as an argument.
+ After generating the password, the program will copy it to your clipboard automatically.
