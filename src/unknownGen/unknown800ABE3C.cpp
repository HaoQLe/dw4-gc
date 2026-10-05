#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800ABCF8();
void fn_800ABD34();
void fn_800ABF00();
void fn_800BB228();
extern char lbl_80477D08[];
extern char lbl_8055DE60[8];
extern void *lbl_80562404;
extern void *lbl_80562A58;
void fn_800ABE64();
void *fn_800ABED8();
void *fn_800ABEF8();
}
extern "C" {
void fn_800ABE3C(){
 fn_80066188((int)fn_800ABE64);
}
void fn_800ABE64(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562404,(int)fn_800BB228,(int)fn_800ABEF8,(int)fn_800ABED8,(int)lbl_80477D08,12,(int)fn_800ABD34,(int)fn_800ABF00,0,(int)lbl_8055DE60);
}
void *fn_800ABED8(){return fn_800ABCF8();}
void *fn_800ABEF8(){return lbl_80562A58;}
}
#pragma pop
