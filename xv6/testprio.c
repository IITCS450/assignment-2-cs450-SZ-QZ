#include "types.h"
#include "stat.h"
#include "user.h"
int
main(void)
{
    int me = getpid();
    int r1 = setpriority(me,1);
    printf(1,"setpriority(%d,1) => %d (expect 0)\n", me, r1);
    int r2 = setpriority(me,3);
    printf(1,"setpriority(%d,3)=> %d (expect -1)\n", me, r2);
    int r3 = setpriority(99999, 1);
    printf(1, "setpriority(99999, 1) => %d (expect -1)\n", r3);
    exit();
}