/*
    This file is part of mDNS Reflector (mdns-reflector), a lightweight and performant multicast DNS (mDNS) reflector.
    Copyright (C) 2021 Yuxiang Zhu <me@yux.im>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef MDNS_REFLECTOR_OPTIONS_H
#define MDNS_REFLECTOR_OPTIONS_H

#include <stdbool.h>
#include <sys/param.h>

struct options {
    bool help;
    bool debug;
    bool foreground;
    bool no_pid_file;
    char pid_file[MAXPATHLEN];
    bool ipv6_only;
    bool ipv4_only;
    int log_level;
    struct reflection_zone *rz_list6, *rz_list4;
    bool unidirectional;
};
#endif //MDNS_REFLECTOR_OPTIONS_H
