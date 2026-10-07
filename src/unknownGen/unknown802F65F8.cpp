#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A9200(void *);
void fn_802A9670(void *);
}
extern "C" {
void fn_802F65F8(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_802A9200((void *)p1);
 fn_802A9670((void *)p2);
}
}
#pragma pop
