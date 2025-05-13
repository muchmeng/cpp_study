#ifndef GUARD_extract_fails_h
#define GUARD_extract_fails_h
// extract_fails.h
#include <vector>
#include <list>
#include "Student_info.h"
bool fgrade(const Student_info&);
std::vector<Student_info> extract_fails(std::vector<Student_info>&);
std::list<Student_info> extract_fails(std::list<Student_info>&);
#endif