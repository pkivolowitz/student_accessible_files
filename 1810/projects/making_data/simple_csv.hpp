#pragma once
#include <vector>
#include <string>

#define	SS_TRIM 		0x01
#define	SS_NOQUOTES		0x02
#define SS_NOTRIMMING	0x04

typedef unsigned char SS_OPTS;

std::vector<std::string> SimpleSplit(std::string &, char delimeter, SS_OPTS sso);
