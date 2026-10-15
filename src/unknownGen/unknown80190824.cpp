#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068128(void *,void *);
extern void *igQuantizeImage_meta;
extern void *igActorInfo_meta;
}
extern "C" {
void *igQuantizeImage_virtual58(){return igQuantizeImage_meta;}
int igRebindActors_virtual7C(){return 1;}
int igRebindActors_virtual70(){return 0;}
void igRebindActors_virtual74(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068128((void *)p1,igActorInfo_meta);
}
}
#pragma pop
