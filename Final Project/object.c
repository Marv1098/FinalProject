/* This C file includes all the objects that are being used for the story */
#include <stdio.h>
#include "object.h"
#include <string.h>

static const char *tags0[] = {"hQ", NULL};
static const char *tags1[] = {"airport", "domashev airport", NULL};
static const char *tags2[] = {"camp", "kangdong prison", NULL};
static const char *tags3[] = {"yacht", "dreadnoght", "boat", NULL};
static const char *tags4[] = {"sea", "ship", "titanic", NULL};
static const char *tags5[] = {"civilians","people", NULL};
static const char *tags6[] = {"bit", "coin", "bit coin $1", NULL};
static const char *tags7[] = {"byte", "coin", "byte coin $8", NULL};
static const char *tags8[] = {"disk controller", "disk controller", NULL};
static const char *tags9[] = {"yourself", NULL};
static const char *tags10[] = {"east", "entrance", NULL};
static const char *tags11[] = {"west", "out", NULL};
static const char *tags12[] = {"west", "north", "south", "forest", NULL};
static const char *tags13[] = {"east", "north", "south", "rock", NULL};

char headQuart[] = "Special Forces Headquarters\n";
char cpuArt[] = "\n"
"___________________ ____ ___\n"
"\\_   ___ \\______   \\    |   \\\n"
"/    \\  \\/|     ___/    |   /\n"
"\\     \\___|    |   |    |  /\n"
" \\______  /____|   |______/ \n"
"        \\/\n";

OBJECT objs[] = {
   {headQuart, tags0, NULL , NULL  },
   {"domashev international airport", tags1, hQ, airport},
   {"kangdong prison camp", tags2, hQ, NULL},
   {"dreadnoght yacht", tags3, hQ, NULL},
   {"open seas", tags4, hQ, NULL},
   {"civilians walking around the airport", tags5, airport,NULL},
   {"a bit coin $1"  , tags6, hQ, NULL  },
   {"a byte coin $8" , tags7, camp , NULL  },
   {"a controller" , tags8, hQ, NULL  },
   {"yourself"  , tags9, NULL, NULL  },
   {"an control bus entrance to the east"    , tags10, NULL, camp  },
   {"a way out to the west"      , tags11, camp , hQ },
   {"There are wires all around you"      , tags12, hQ, NULL  },
   {"There are transistors, cache memory, IRQ all around"      , tags13, camp , NULL  },
   {"New Objects", tags13, camp, NULL}
};
