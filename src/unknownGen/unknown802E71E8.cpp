#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802E7438();
extern char lbl_8041CA68[];
extern char lbl_804D31B8[];
extern char lbl_804D31D4[];
extern void *lbl_80535828;
extern void *lbl_8053582C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802E71E8(){
 if(!lbl_80535828) lbl_80535828=fn_800635C8(lbl_8041CA68,lbl_804D31B8,lbl_804D31D4,0x7);
 return lbl_80535828;
}
void *fn_802E7248(void *object){
 fn_802E7438();
 return fn_8006546C(lbl_8053582C,object);
}
void *fn_802E7288(){
 if(!lbl_8053582C) lbl_8053582C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053582C;
}
void *beAction2_getMeta(){
 if(!lbl_8053582C || !(reinterpret_cast<unsigned int *>(lbl_8053582C)[0x24/4]&4)) fn_802E7438();
 return lbl_8053582C;
}
}
#pragma pop
