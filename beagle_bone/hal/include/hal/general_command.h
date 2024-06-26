#ifndef _GENERAL_COMMAND_H_
#define _GENERAL_COMMAND_H_

// Module containing basic utility functions

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <errno.h>

long long getTimeInMs(void);
void sleepForMs(long long delayInMs);
void runCommand(char* command);
void writeToFile(const char *file, const char *value);

void readFromFileToScreen(char *fileName);
long long getTimeInNs(void);
int getDataFromFile(char *fileName);

int read_value_from_file(const char *file_path);


#endif