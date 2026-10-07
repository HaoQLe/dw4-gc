#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8029963C(void *,void *);
void fn_80299728(void *);
void *fn_80299820();
void *fn_802998E0();
void fn_80299A30(void *);
void fn_80299B34(void *,void *,void *,void *,void *);
void *fn_80299B94();
void fn_80299D90(int,int);
}
extern "C" {
void *fn_803FA4FC(){return fn_802998E0();}
void fn_803FA51C(int p0){
 fn_80299728((void *)p0);
 fn_80299A30((void *)p0);
}
void *fn_803FA550(){return fn_80299820();}
void fn_803FA570(int p0,int p1,int p2,int p3,int p4){
 fn_80299A30((void *)p0);
 fn_80299B34((void *)p0,(void *)p1,(void *)p2,(void *)p3,(void *)p4);
 fn_8029963C((void *)p0,(void *)p4);
}
void *fn_803FA5D0(){return fn_80299B94();}
void fn_803FA5F0(int p0){
 fn_80299D90(p0,0);
}
}
#pragma pop
