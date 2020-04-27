typedef struct object {
   const char    *description;
   const char   **tags;
   struct object *location;
   struct object *destination;
} OBJECT;

extern OBJECT objs[];

#define hQ    (objs + 0)
#define airport        (objs + 1)
#define camp       (objs + 2)
#define yacht      (objs + 3)
#define sea        (objs + 4)
//#define bit        (objs + 2)
//#define byte       (objs + 3)
#define guard      (objs + 5)
#define player     (objs + 6)
#define mission1   (objs + 7)
#define mission2   (objs + 8)
#define mission3   (objs + 9)
#define mission4   (objs + 10)
#define exitProcess   (objs + 11)
#define walldataBus  (objs + 12)
#define wallCpu   (objs + 13)
#define newObjs (objs + 14)
#define endOfObjs  (objs + 15)
