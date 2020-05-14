typedef struct object {
   const char    *description;
   const char   **tags;
   struct object *location;
   struct object *destination;
} OBJECT;

extern OBJECT objs[];

#define hQ         (objs + 0)
#define airport    (objs + 1)
#define camp       (objs + 2)
#define yacht      (objs + 3)
#define sea        (objs + 4)
#define operatingSysP1      (objs + 5)
#define player     (objs + 6)
#define shiv	   (objs + 7)
#define guard	   (objs + 8)
#define guard2	   (objs + 9)
#define newObjs (objs + 10)
#define mission1 (objs + 11)
#define mission2 (objs + 12)
#define civilians	(objs + 13)
#define aircraft	(objs + 14)
#define operatingSysP2	(objs + 22)
#define operatingSysP3	(objs + 28)
#define guest		(objs + 29)
#define engine		(objs + 30)
#define bridge		(objs + 31)
#define lopatinCabin	(objs + 32)
#define nearHim		(objs + 46)
#define end1		(objs + 48)
#define end2		(objs + 49)
#define endOfObjs  (objs + 52)
