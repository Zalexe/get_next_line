get_next_line – 42 School Project
## Overview

get_next_line is a systems-level project from the 42 curriculum focused on file descriptor handling and buffered input reading.

The objective is to implement a function that reads and returns one line at a time from a file descriptor, regardless of the file size or the buffer size used for reading.

The function must work efficiently and correctly across multiple calls, maintaining state between executions.

## Project Scope

The project includes:

·  Reading from a file descriptor using read()

·  Managing a buffer of configurable size (BUFFER_SIZE)

·  Returning exactly one line per function call

·  Preserving remaining data between calls

·  Supporting multiple file descriptors simultaneously (bonus)

·  Handling edge cases (EOF, empty files, large lines, errors)

·  Ensuring proper memory allocation and deallocation

Implemented in:

·  C

·  Low-level UNIX I/O functions

## Project Focus

get_next_line focuses on:

·  Understanding how file descriptors behave

·  Managing static memory across function calls

·  Designing controlled buffering mechanisms

·  Handling partial reads and incomplete lines

·  Writing deterministic logic around low-level I/O

## Technical Scope

The project explores how input streams are processed internally. Since read() does not guarantee full-line reads, the implementation must accumulate data progressively until a newline is encountered.

Particular attention is given to:

·  Efficient string handling

·  Preventing memory leaks

·  Managing leftover data safely

·  Handling multiple descriptors without data corruption

The emphasis is on mastering controlled input handling and memory discipline in a low-level environment.

## Build & Use

This project provides a function:

    char *get_next_line(int fd);

It returns:

·  A line ending with \n

·  Or the remaining content at EOF

·  Or NULL on error or when no more data is available
