#ifndef PRACTICAL_H
#define PRACTICAL_H

#include <stdio.h>
#include <stdlib.h>

void DieWithUserMessage(const char *msg, const char *detail);
void DieWithSystemMessage(const char *msg);
void HandleTCPClient(int clntSocket);


#endif // PRACTICAL_H
