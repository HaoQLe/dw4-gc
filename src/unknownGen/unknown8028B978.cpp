#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041F84(void *,void *,void *);
void fn_800424E8(void *,void *,void *,void *);
void fn_800425BC(void *);
extern void *lbl_80515C70;
}
extern "C" {
void igSerialScheduler_virtual6C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80041F84(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1,(void *)p2);
}
void igSerialScheduler_virtual70(int p0,int p1,int p2){
 void *local0;
 fn_800424E8(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1,(void *)p2);
}
void igSerialScheduler_virtual74(int p0){
 fn_800425BC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
}
void *igSerialScheduler_virtual58(){return lbl_80515C70;}
}
#pragma pop
